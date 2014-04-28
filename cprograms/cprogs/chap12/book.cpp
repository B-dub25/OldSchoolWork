/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <fstream>
#include "bookimp.cpp"
#include "bookmem.h"
#include "book.h"
#include "title.cpp"
#include <string>
#include <ctime>
#include <cstdlib>



using namespace std;
//constant members for member array and volumes in that order.
const int SIZE = 500;
const int TITLE = 1000;
//function prototypes

void display(book stock[],int);
void sort_books(book stock[],int);
void fill_stock(book stock[],int&);
void find_author(book vol[],int all);
void find_book_title(book vol[],int);
void find_book_isbn(book vol[],int all);
void author_check(ifstream&,int,string&);
void remove_book(book vol[], int items);
void add_member(memberType mem[],int& num);
void search_for_mem(memberType mem[],int all);
void update_mem(memberType mem[], int members);

int main()
{
    int choice;
    memberType mem[SIZE]; int total_mem = 0;
    book volumes[TITLE];  int items = 0;
    fill_stock(volumes,items);

    do
    {
        cout << right << setw(8) << " "  << " 0: Exit\n"
             << right << setw(8) << " "  << " 1: Search for member\n"
             << right << setw(8) << " "  << " 2: Check stock on book\n"
             << right << setw(8) << " "  << " 3: Update number of copies in stock\n"
             << right << setw(8) << " "  << " 4: Remove book from stock\n"
             << right << setw(8) << " "  << " 5: Process a return\n"
             << right << setw(8) << " "  << " 6: Check books bought\n"
             << right << setw(8) << " "  << " 7: Check amount spent\n"
             << right << setw(8) << " "  << " 8: Add Discount\n"
             << right << setw(8) << " "  << " 9: Add a new member\n"
             << right << setw(8) << " "  << "10: Update member info\n"
             << right << setw(8) << " "  << "11: Find book by tile\n"
             << right << setw(8) << " "  << "12: Display stock\n";
        cout << right << setw(8) << " " ; cin >> choice; cin.ignore(10,'\n');
       switch(choice)
       {
           case 0:  break;
           case 1:  search_for_mem(mem,total_mem);   break;
           case 2:  find_book_title(volumes,items);  break;
           case 3:  break;
           case 4:  remove_book(volumes,items);      break;
           case 5:  break;
           case 6:  break;
           case 7:  break;
           case 8:  break;
           case 9:  add_member(mem,total_mem);       break;
           case 10: update_mem(mem,total_mem);       break;
           case 11: find_book_title(volumes,items);  break;
           case 12: display(volumes,items);          break;
       }


    }while(choice != 0);
}

void find_book(book vol[],int all)
{
    char choice;
    cout <<"I: To search by ISBN\n"
         <<"T: To search by title\n"
         <<"A: To search by author\n";
         cin >> choice;
    if(toupper(choice) == 'T')
          find_book_title(vol,all);
    else if(toupper(choice) == 'I')
          find_book_isbn(vol,all);
    else if(toupper(choice) == 'A')
          find_author(vol,all);
    else
          cout << "Invalid:choice\n";
}
void find_author(book vol[], int all)
{
    string auther; int x = 0; int loc = 0;
    bool found = false; string authers;
    cout << "Enter author name ";

    getline(cin,auther);

    while(x < all -1 && !found)
    {
        authers = vol[x].get_author_name();
        if (authers.find(auther) != string::npos)
             {
                 loc = x;
                 found = true;
             }
        x++;
    }
    if(found)
       vol[x].print();
}
void find_book_isbn(book vol[], int all)
{
    string id; bool found = false;
    int x = 0; int loc;
    cout << "Enter the isbn number of book. "; getline(cin,id);

    while(x < all - 1 && !found)
    {
        if(vol[x].get_isbn() == id)
        {
            found = true;
            loc = x;
        }
        x++;
    }
    if(found)
       vol[loc].print();
}
void find_book_title(book vol[],int all)
{
    int x = 0; int loc = 0; bool found = false;
    string heading;

    cout << "Enter book title to search for. ";
    getline(cin,heading);

    while(x < all-1  && !found)
    {
        if(vol[x].get_title() == heading)
        {
            found = true;
            loc = x;
        }
        x++;
    }
    if(found)
      vol[loc].print();

}

void search_for_mem(memberType mem[],int all)
{
    cout << string(100,'\n'); //standard way of clearing the screen.
    char answer = '\0';
    string name; int x = 0; int loc = 0;bool found = false;
    cout << "Enter member first and lastname. "; getline(cin,name);
    while(x < all && !found)
    {
        if(mem[x].get_name() == name)
        {
            found = true;
            loc = x;
        }
      x++;
    }
    if(found)
      mem[loc].print_mem();
      else
      {
          cout << "Did not find " << name << ". Please check the spelling.\n"
               << "Do you want to try again? (Y) for yes, anyother key for no"; cin >> answer;
               cout << endl;
           if(toupper(answer) == 'Y')
             {
                 cin.ignore(10,'\n');
                 search_for_mem(mem,all);
             }
      }
}

void sort_books(book stock[],int invintory)
{
    int smallest; int x; int i;
    book temp; string title, titles;
    for(x=0;x<invintory -1 ; x++)
    {
        smallest = x; // assume the smallest is the first one
        for(i=x+1;i < invintory -1 ;i++)
           if(stock[i].get_title() < stock[smallest].get_title())
                smallest = i; // reset the smallest if need be.

     temp = stock[smallest];
     stock[smallest] = stock[x];
     stock[x] = temp;
    }
}
void display(book stock[], int invintory)
{
    for(int x = 0; x < invintory - 1; x++)
          stock[x].print();
}
void add_member(memberType mem[],int& num)
{

    cout << string(100,'\n');
    string name;
    int mem_num;
    int total_book = 0; double money_spent = 0.0;
    srand(time(0));
    cout << "Enter members name. ";
    getline(cin,name);
    mem_num = (rand() % 10000) * 77 ;// this is to randomly generate a member ID.
    cout << "Enter books bought if any. ";
    cin >> total_book;
    cout << "Enter money spent if any. ";
    cin >> money_spent;
    mem[num].set_info(name,mem_num,total_book,money_spent);
    num++;
    cout << string(100,'\n');
}
void add_book(memberType mem[], int num)
{
    string name; int x = 0; bool found = false; int more = 0;
    cout << "Enter member name\n"; getline(cin,name);
    cout << "Enter the number of books to add \n"; cin >> more;
       while(x < num && !found)
       {
           if(name == mem[x].get_name())
              found = true;
            x++;
       }
    if(found)
        mem[x].add_books(more);
}
void update_mem(memberType mem[], int members)
{
    int bought = 0; double money = 0.0;
    int x = 0;      int loc;
    string name;    bool found = false;
    int mem_id,books_bough;
    cout << "Enter member name\n"; getline(cin,name);
    while(x < members  && !found)
    {
        if(mem[x].get_name() == name)
           {
               found = true;
               loc = x;
           }
        x++;
    }
    if(found)
    {
       cout << "Enter new name. "; getline(cin,name);
       cout << "Enter books bought. "; cin >> books_bough;
       cin.ignore(10,'\n');
       cout << "Enter money spent."; cin >> money;
       mem_id = mem[loc].retrieve_id();
       mem[loc].set_info(name,mem_id,books_bough,money);
    }
}
void fill_stock(book stock[], int& total)
{
   ifstream in; in.open("stock.txt");
   string header , id, pub, auther;
   int in_stock, num_auth ; double cost;

   while(in)
   {
       getline(in,header);
       in >> num_auth;
       author_check(in,num_auth,auther);
       getline(in,pub);
       getline(in,id);
       in >> cost;
       in.ignore(10,'\n');
       in >> in_stock;
       in.ignore(10,'\n');
       stock[total].set_list(header,num_auth,auther,pub
                         , id , cost , in_stock);

      total++;
   }
   sort_books(stock,total);
}

void author_check(ifstream& in,int number, string& auth)
{
    string other; auth = '\0';
    for (int x = 0; x <= number; x++)
         {
             getline(in,other);
             auth = other + " " + auth;
         }
}
