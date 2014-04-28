/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class book
{
    public:
    void increase(int);
    void decrease(int);
    void set_list(string,int,string,string,
                  string,double,int);
    // This function will gather the information needed
    // to fill the array. it expects a 3 strings , integer
    void get_list(string&,int&,string&,string&,
                  string&,double&,int&);
    void print() const;
    void print_isbn() const;
    void get_copies(int& ) const;
    string get_title(string) const;
    //This gets and returns the title of the book for sorting and searching.
    string get_isbn(string) const;
    //This is for searching for isbn
    void get_author_name(string&) const;
    //This function is only for searching for author of the book.
    book();
    //Constructor to set the class members as a default.
    private:
            string title;
            string auth;
            string publish;
            string isbn;
            int num_of_author;
            double price;
            int copies;
            void remove_dash(string&);
            //This function will remove the dash in the ISBN book ID.
            //The reason for it being private is get_list calls it and
            //the user does not need access to it.
};
void book::print_isbn() const
{
         cout << left  << setw(6)  << "ISBN:" << right <<isbn << "\n"
              << left  << setw(5)  << "Title: " << right << title <<"\n"
              << left  << setw(20) << "Number of Authors: " <<right << num_of_author <<"\n"
              << left  << setw(8)  << "Author: " << right << auth << "\n"
              << left  << setw(10) << "Publisher: "<<right << publish<< "\n"
              << left  << setw(15) << "Price of book: " << right
              << fixed << showpoint << setprecision(2)
              << "$ "  << price << "\n"
              << fixed << showpoint << setprecision(0)
              << left  << setw(18) << "Number of copies:"
              << right << copies <<"\n" <<"\n";

}
void book::decrease(int minus)
{
    copies = copies - minus;
}
void book::increase(int add)
{
    copies = copies + add;
}
void book::get_copies(int& num) const
{
    num = copies;
}
void book::print() const
{
         cout << left  << setw(5)  << "Title: " << right << title <<"\n"
              << left  << setw(20) << "Number of Authors: " <<right << num_of_author <<"\n"
              << left  << setw(8)  << "Author: " << right << auth << "\n"
              << left  << setw(10) << "Publisher: "<<right << publish<< "\n"
              << left  << setw(6)  << "ISBN:" << right <<isbn << "\n"
              << left  << setw(15) << "Price of book: " << right
              << fixed << showpoint << setprecision(2)
              << "$ "  << price << "\n"
              << fixed << showpoint << setprecision(0)
              << left  << setw(18) << "Number of copies:"
              << right << copies <<"\n" <<"\n";
}
string book::get_isbn(string id) const
{
    id = isbn;
    return id;
}
string book::get_title(string heading) const
{
    heading = title;
    return heading;
}
void book::get_author_name(string& wri) const
{
    wri = auth;
}
void book::get_list(string& heading,int& num_author ,string& authors
                    , string& pub,string& book_id, double& money,int& in_stock)
{
    heading = title;
    num_author = num_of_author;
    authors = auth;
    pub = publish;
    book_id = isbn;
    money = price;
    in_stock = copies;
}

void book::set_list(string heading,int num_author ,string authors
                    , string pub,string book_id, double money,int in_stock)
{
    title = heading;
    num_of_author = num_author;
    auth = authors;
    publish = pub;
    isbn = book_id;
    price = money;
    copies = in_stock;
    remove_dash(book_id);
}
void book::remove_dash(string& book_id)
{
    int x = isbn.find('-');
    if(x != -1) // This is a recursive function to get rid of the dashes in the ISBN number
    {
     isbn = book_id.erase(x,1);
     remove_dash(book_id);
    }
}

book::book() // default values.
{
    title = " ";
    num_of_author = 0;
    auth = " ";
    isbn = " ";
    price = 0;
    copies = 0;

}
void decrease_copies(ifstream& in, book books[],int size);
void remove_book(ifstream&,book books[],int& size);
void print_book_id(book books[],int size);
void increase_copies(ifstream&, book books[],int);
void add_new_book(ifstream& in,book books[],int& size);
void find_author(ifstream&,book books[],int size);
void find_isbn(ifstream&,book books[],int size);
void find_title(ifstream&,book books[],int size);
void author_check(ifstream& in,int check, string& auth);
void sort(book arrr[],int total);
void fill(ifstream&,book ar[],int& x);
void display(book ar[],int);
void check_copies(ifstream&,book books[],int size);
const int MAX = 30;
int main()
{
    book hardback[MAX];
    int num_books = 0;
    ifstream infile; infile.open("mp7bookdata_UNIX.txt");
    ifstream oper; oper.open("mp7booktrans_UNIX.txt");
    char choice,junk ;
    if(!infile)
    {
        cout << "File does not exist or not in path\n "
             << "Please check for the file and run again";
        return -1;
    }
    fill(infile,hardback,num_books);
    if(!oper)
    {
        cout << "Script is not in path or does not exist.\n"
             << "Please check and try again.";
    }
    oper >> choice; oper.get(junk);
    while(oper)
    {
      switch(choice)
      {
        /* case 'P': display(hardback,num_books);              break;
         case 'T': find_title(oper,hardback,num_books);      break;
         case 'A': find_author(oper,hardback,num_books);     break;
         case 'I': find_isbn(oper,hardback,num_books);       break;
         case 'C': check_copies(oper,hardback,num_books);    break;*/
         case 'N': add_new_book(oper,hardback,num_books);    break;
        // case 'R': remove_book(oper,hardback,num_books);     break;
         //case 'M': increase_copies(oper,hardback,num_books); break;
        //case 'L': decrease_copies(oper,hardback,num_books); break;
         //case 'Q': print_book_id(hardback,num_books);        break;
      } //end of switch
      oper.get(choice); oper.get(junk);
    }//end of while loop*/
   display(hardback,num_books);
}
void remove_book(ifstream& in,book books[],int& size)
{
      int x = 0; int loc; bool found = false;
      string book_id,search;
      getline(in,search);
      int dash = search.find('-');
      while(dash != -1)
      {
          search = search.erase(dash,'-');
          dash = search.find('-');
      }
      while(x < size -1 && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                loc=x;
              }
      x++;
      }
      for(int j = loc;j<size-1;j++)
           books[j] = books[j+1];
}
void print_book_id(book books[],int size)
{
    for(int y = 0;y<size-1;y++)
       {
         books[y].print_isbn();
       }
    cout << endl;
}
void decrease_copies(ifstream& in, book books[],int size)
{
      int x = 0; int loc; int copies; int num_of;
      bool found = false;
      string book_id,search; char junk;

      getline(in,search); in >> copies; in.get(junk);
      int dash = search.find('-');

      while(dash != -1)
      {
          search = search.erase(dash,'-');
          dash = search.find('-');
      }

      while(x < size -1 && !found)
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
void increase_copies(ifstream& in, book books[],int size)
{
      int x = 0; int loc; int copies;
      bool found = false;
      string book_id,search; char junk;

      getline(in,search); in >> copies; in.get(junk);
      int dash = search.find('-');

      while(dash != -1)
      {
          search = search.erase(dash,'-');
          dash = search.find('-');
      }

      while(x < size -1 && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                books[x].increase(copies);
              }
      x++;
      }
}
void fill(ifstream& infile,book volume[],int&  size)
{
    string header, writer, publisher, book_id;
    int num_auth , copies_in_stock;
    char junk;
    double price_of_book;
    // this loop grabs the title = header,number of authors = num_auth,
    // author = writer , publisher , book_id = isbn, price of book and copies in stock.
    while(infile)
    {
        getline(infile,header);
        infile >> num_auth;
        infile.get(junk);
        getline(infile,writer);
        author_check(infile,num_auth,writer);
        getline(infile,publisher);
        infile >> book_id;
        infile.get(junk);
        infile >> price_of_book;
        infile.get(junk);
        infile >> copies_in_stock;
        volume[size].set_list(header,num_auth,writer,publisher,
                        book_id,price_of_book,copies_in_stock); //sets the values to the object array
        infile.get(junk);//grabs the endline character

        size++;
    }
    sort(volume,size); // sort the list alphbeticaly
}
void display(book ar[],int size)
{
    for(int y = 1;y<size;y++)
       {
         ar[y].print();
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
void author_check(ifstream& in,int number,string& authors)
{
    string other;
    if(number >= 2)
    {
        for(int x = 1; x < number;x++)
        {
            getline(in,other);
            authors = authors + " " + other;
        }
    }
    else
   authors = authors;
}
void find_author(ifstream& in,book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string writer,search; char junk;
      in.get(junk);
      getline(in,search);
      while(x < size -1 && !found)
      {
          books[x].get_author_name(writer);
          if( writer.find(search) != string::npos)
              {
                found = true;
                loc=x;
              }
      x++;
      }
      if(found)
        books[loc].print();
      else
        cout << search << " Is not in the book data base \n";
}
void find_title(ifstream& in,book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string header , search; char junk;

      getline(in,search);

      while(x < size -1 && !found)
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
    else
        cout << search << " Is not in the book data base \n";
}
void find_isbn(ifstream& in,book books[],int size)
{
      int x = 0; int loc; bool found = false;
      char junk;
      string book_id,search;
      //in.get(junk);
      //getline(in,search);
      in >> search;
      int dash = search.find('-');
      while(search.find('-') != string::npos )
      {
          search = search.erase(dash,'-');
          dash = search.find('-');

      }

      while(x < size -1 && !found)
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
      else
         cout << search << " Is not in the book data base \n";
}
void check_copies(ifstream& in,book books[],int size)
{
      int x = 0; int loc; bool found = false;
      string book_id,search; char junk;
     // in.get(junk);
      getline(in,search);
      while(x < size -1 && !found)
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
      else
         cout << "Book not found\n";
}
void add_new_book(ifstream& in,book books[],int& size)
{
    string header, writer, publisher, book_id,other;
    char junk;
    int num_auth,copies_in_stock;
    double price_of_book;

        getline(in,header);
        in >> num_auth;
        in.get(junk);
        getline(in,writer);
        author_check(in,num_auth,writer);
        in.get(junk);
        getline(in,publisher);
        in >> book_id;
        in.get(junk);
        in >> price_of_book;
        in.get(junk);
        in >> copies_in_stock;
        books[size].set_list(header,num_auth,writer,publisher,
                        book_id,price_of_book,copies_in_stock); //sets the values to the object array
        in.get(junk);//grabs the endline character

        size++;
      sort(books,size); // resort the data base.
}
