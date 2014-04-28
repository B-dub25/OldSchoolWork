/*
Author Brian Rundel
Created on:


*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include "mp7src.cpp"
#include "mp7.h"

using namespace std;

const int SIZE = 30;
void remove(string& search);

void sort(book tome[],int total);
void fill(book volume[],int& size);
void print(book books[],int size);
void find_isbn(book books[],int size);
void find_title(book books[],int size);
void find_author(book books[],int size);
void remove_book(book books[],int& size);
void check_copies(book books[],int size);
void print_book_id(book books[],int size);
void decrease_copies(book books[],int size);
void increase_copies(book books[],int size);
void lower_price(book books[], const int size);
void higher_price(book books[], const int size);

int main()
{
    book volume[SIZE];
    char choice; int total = 0;
    do
    {
        cout << "N: Make a new invintory\n"
             << "P: Print the invintory of the books\n"
             << "Q: Print by ISBN\n"
             << "A: Add a book to the invintory\n"
             << "D: Delete a book from the invintory\n"
             << "I: Search for a book by ISBN\n"
             << "F: Find a author\n"
             << "T: Find book by title\n"
             << "C: Report how many copies of a book are in stock\n"
             << "M: Increase the copies of a book in stock\n"
             << "L: Decrease the copies of a book in stock\n"
             << "E: Increase the price of book by ISBN\n"
             << "V: Lower the price of book by ISBN\n"
             << "Z: Print the total books in invintory\n"
             << "X: Exit the program\n";
            cin >> choice;cin.ignore(1000,'\n');
           switch(toupper(choice))
           {
            case 'N': fill(volume,total);            break;
            case 'P': print(volume,total);           break;
            case 'Q': print_book_id(volume,total);   break;
            case 'A': fill(volume,total);            break;
            case 'D': remove_book(volume,total);     break;
            case 'I': find_isbn(volume,total);       break;
            case 'F': find_author(volume,total);     break;
            case 'T': find_title(volume,total);      break;
            case 'C': check_copies(volume,total);    break;
            case 'M': increase_copies(volume,total); break;
            case 'L': decrease_copies(volume,total); break;
            case 'E': higher_price(volume,total);    break;
            case 'V': lower_price(volume,total);     break;
            case 'Z': cout << total << '\n';         break;
           }

    }
    while(toupper(choice) != 'X');
}
void fill(book volume[],int& size)
{
    string title,auther,id,publish;
    int number,stock;
    double money;
    char answer;
    do
    {
        cout << "Title of book\n";
        getline(cin,title);
        //cin.ignore(100,'\n');
        cout << "Number of Authors\n";
        cin >> number;
        cin.ignore(100,'\n');
        cout << "Author(s) of book\n";
        getline(cin,auther);
        cout << "Publisher of book\n";
        cin >> publish;
        cin.ignore(100,'\n');
        cout << "ISBN of the book\n";
        getline(cin,id);
        cout << "Cost of the book. Without $ sign\n";
        cin >> money;
        cin.ignore(100,'\n');
        cout << "Copies in stock\n";
        cin >> stock;
        cin.ignore(100,'\n');
        volume[size].set_list(title,number,auther,
                      publish,id,money,stock);
        size++;
        cout << "Add another?\n";
        cout << "N for no or any other character for yes ";
        cin >> answer;cin.ignore(1000,'\n');
    }
    while(toupper(answer) != 'N');
    sort(volume,size);
    cout << endl;
}
void print(book books[],int size)
{
     for(int y = 0;y<size;y++)
       {
         books[y].print();
       }
     cout << endl;
}
void print_book_id(book books[],int size)
{
     for(int y = 0;y<size-1;y++)
       {
         books[y].print_isbn();
       }
     cout << endl;
}
void sort(book tome[],int total)
{
    int x = 0; int smallest;
    int y = 0; book temp; string header;
    for(x=0;x<total-1;x++)
    {
        smallest = x;//0
        for(y = 1+x;y<total-1;y++)
         if(tome[y].get_title(header) < tome[smallest].get_title(header))
            smallest = y;//1

    temp = tome[smallest];
    tome[smallest] = tome[x];
    tome[x]=temp;
    }
}
void find_author(book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string writer,search; char junk;
      cout << "Enter the Author or authors names to find\n";
      getline(cin,search);
      books[x].get_author_name(writer);
      while(x < size  && !found)
      {
          if( writer.find(search) != string::npos)
              {
                found = true;
                loc=x;
              }
      x++;
      books[x].get_author_name(writer);
      }
      if(found)
        books[loc].print();
}
void find_title(book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string header , search; char junk;
      cout << "Enter the title of book you wish to find\n";
      getline(cin,search);
      while(x < size   && !found)
      {
          if( books[x].get_title(header) == search)
              {
                found = true;
                loc=x;
              }
      x++;
      }
      if(found)
          books[loc].print();
}
void find_isbn(book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string book_id,search;
      cout << "ENter ISBN of book to find\n";
      getline(cin,search);
      remove(search);
      while(x < size  && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                loc=x;
              }
      x++;
      }
      if(found)
         books[loc].print();
}
void remove(string& search)
{
   int dash = search.find('-');
   while(search.find('-') != string::npos )
      {
          search = search.erase(dash,1);
          dash = search.find('-');

      }
}
void check_copies(book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string book_id,search;
      cout << "Enter the ISBN of book to check how many copies are in stock\n";
      getline(cin,search);
      while(x < size  && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                books[x].get_copies(loc);
              }
      x++;
      }
      if(found)
         cout << "There is " << loc << " copies in stock\n";
}
void increase_copies(book books[],int size)
{
      int x = 0; int loc; int copies;
      bool found = false;
      string book_id,search;
      cout << "Enter the book ISBN\n";
      getline(cin,search);
      cout << "How many copies to add?\n";
      cin >> copies;
      remove(search);
      while(x < size  && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                cout << "found";
                found = true;
                books[x].increase(copies);
              }
      x++;
      }
}
void decrease_copies(book books[],int size)
{
      int x = 0; int loc; int copies; int num_of;
      bool found = false;
      string book_id,search; char junk;
      cout << "Enter ISBN of book to decrease copies\n";
      getline(cin,search);
      cout << "How many to decrease? ";
      cin >> copies;
      remove(search);

      while(x < size  && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                 books[x].get_copies(num_of);
                if( num_of > copies)
                   books[x].decrease(copies);
                else
                  cout << "Invalid amount of copies to decrease\n";
              }
      x++;
      }
}
void remove_book(book books[],int& size)
{
      int x = 0; char junk;
      string book_id, search;
      cout << "Enter the ISBN of book to remove\n";
      getline(cin,search);
      remove(search);
      while(x < size -1 && books[x].get_isbn(book_id) != search)
      {x++;}

       for(x;x<size-1;x++)
           books[x] = books[x+1];
   size--;
}
void lower_price(book books[], const int size)
{
    string id; double newprice = 0.0; int x = 0;
    string bn; int loc; bool found = false;
    cout << "Enter the ISBN for the book you would like\n";
    cin >> newprice;
    remove(id); // remove the dash is any in the user defined isbn

    while(x < size - 1 && !found)
    {
      if(books[x].get_isbn(bn) == id)
          {
              loc = x;
              found = true;
          }
      x++;
    }
    if(found)
       books[loc].decrease_price(newprice);
}
void higher_price(book books[], const int size)
{
    string id; double newprice = 0.0; int x = 0;
    string bn; int loc; bool found = false;
    cout << "Enter the ISBN for the book you would like\n";
    cin >> newprice;
    remove(id); // remove the dash is any in the user defined isbn

    while(x < size - 1 && !found)
    {
      if(books[x].get_isbn(bn) == id)
          {
              loc = x;
              found = true;
          }
      x++;
    }
    if(found)
       books[loc].increase_price(newprice);
}
