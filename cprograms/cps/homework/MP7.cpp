/*
Author Brian Rundel
Created on:
This program will take as input from a file book information.
It will then turn and make a data base for the books out of a array
then it will take input from a file to proform actions on the program.
The actions will be search for a author, title, isbn, check copies
decrease copies, increase copies, print the invintory by title,
print invintory by isbn. It will do these actions by using class functions
along with class member variables and main functions.
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
    //To increase the value of copies
    void decrease(int);
    //To decrease the value of copies
    void set_list(string,int,string,string,
                  string,double,int);
    // This function will gather the information needed
    // to fill the array. it expects a 3 strings , integer
    void get_list(string&,int&,string&,string&,
                  string&,double&,int&);
    void print() const;
    //To print the array by title
    void print_isbn() const;
    //To print the array by isbn
    void get_copies(int& ) const;
    //To return the value of copies
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
void book::decrease(int minus) //decrease the copies instock
{
    copies = copies - minus;
}
void book::increase(int add) // increase the copies instock
{
    copies = copies + add;
}
void book::get_copies(int& num) const //return the copies in stock
{
    num = copies;
}
void book::print() const // print by title
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
string book::get_isbn(string id) const //return isbn
{
    id = isbn;
    return id;
}
string book::get_title(string heading) const //return the title
{
    heading = title;
    return heading;
}
void book::get_author_name(string& wri) const // return the author
{
    wri = auth;
}
void book::get_list(string& heading,int& num_author ,string& authors
                    , string& pub,string& book_id, double& money,int& in_stock) // return the the invintory
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
                    , string pub,string book_id, double money,int in_stock) //set the list by value
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
void book::remove_dash(string& book_id) // remove the dash if any within the isbn
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
const int MAX = 30;
void remove(string& search); //remove dash within user defined isbn
void sort(book tome[],int total); // sort the invintory by title
void fill(ifstream&,book ar[],int& x); // fill the data base
void display(const book ar[],int size); // display the data base by title
void print_book_id(book books[],int size); // display data base by isbn
void find_title(ifstream&,book books[],int size); // find a title
void find_isbn(ifstream& in,book books[],int size); // find a book by isbn
void find_author(ifstream& in,book books[],int size); //find book by author
void check_copies(ifstream& in,book books[],int size); //check current copies in stock by isbn
void remove_book(ifstream& in,book books[],int& size); //remove book by isbn
void add_new_book(ifstream& in,book books[],int& size); //add a new book
void decrease_copies(ifstream& in, book books[],int size); // decrease copies by isbn
void increase_copies(ifstream& in, book books[],int size); // increase copies by isbn
void author_check(ifstream& in,int number,string& authors); // get all the authors

int main()
{
    book hardback[MAX]; // make a array to hold all the books
    int num_books = 0; // keep track of how many books are within the data base
    ifstream infile; infile.open("mp7bookdata_UNIX.txt");
    ifstream oper; oper.open("mp7booktrans_UNIX.txt");
    char choice,junk ; // to run the commands from the oper file and get the end of line character
    if(!infile) // check to see if the file exists
    {
        cout << "File does not exist or not in path\n "
             << "Please check for the file and run again";
        return -1;
    }
     fill(infile,hardback,num_books); // fill the array
     infile.close(); // close the file
     if(!oper) // check to see if the file exists
    {
        cout << "Script is not in path or does not exist.\n"
             << "Please check and try again.";
    }
    oper >> choice; oper.get(junk); // prime read
    while(oper) //run through the file untill its at the end
    {
      switch(choice) // run through the commands and run the approperate functions
      {
          case 'P': display(hardback,num_books);              break;
          case 'T': find_title(oper,hardback,num_books);      break;
          case 'A': find_author(oper,hardback,num_books);     break;
          case 'I': find_isbn(oper,hardback,num_books);       break;
          case 'C': check_copies(oper,hardback,num_books);    break;
          case 'N':  add_new_book(oper,hardback,num_books);   break;
          case 'R': remove_book(oper,hardback,num_books);     break;
          case 'M': increase_copies(oper,hardback,num_books); break;
          case 'L': decrease_copies(oper,hardback,num_books); break;
          case 'Q': print_book_id(hardback,num_books);        break;
         default:
                break;
      } //end of switch
      oper >> choice; oper.get(junk);
    }//end of while loop*/
return 0;
} // end of main
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
        infile.ignore(10,'\n');
        author_check(infile,num_auth,writer);
        getline(infile,publisher);
        infile >> book_id;
        infile.ignore(10,'\n');
        infile >> price_of_book;
        infile.ignore(10,'\n');
        infile >> copies_in_stock;
        volume[size].set_list(header,num_auth,writer,publisher,
                        book_id,price_of_book,copies_in_stock); //sets the values to the object array
        infile.ignore(10,'\n');//grabs the endline character
        writer = '\0'; //resets the writer.
        size++;
    }
     sort(volume,size); // sort the list alphbeticaly
}
void author_check(ifstream& in,int number,string& authors) // this function gets all the authors so if there is more then one
{
        string other;
        for(int x = 0; x < number;x++)
        {
            getline(in,other);
            authors = authors + " " + other;
        }
}
void print_book_id(book books[],int size) // see prototype
{
     for(int y = 0;y<size-1;y++)
       {
         books[y].print_isbn();
       }
     cout << endl;
}
void display(const book ar[],int size) // see prototype
{
    for(int y = 0;y<size-1;y++)
       {
         ar[y].print();
       }
    cout << endl;
}
void sort(book tome[],int total) // see prototype
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
void find_author(ifstream& in,book books[],int size) // see prototype
{
      int x = 0; int loc; bool found = false;
      string writer,search; char junk;
      getline(in,search);
      books[x].get_author_name(writer);
      while(x < size -1 && !found)
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
void find_title(ifstream& in,book books[],int size)// see prototype
{
      int x = 0; int loc; bool found = false;
      string header , search; char junk;

      getline(in,search);

      while(x < size -1  && !found)
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
void find_isbn(ifstream& in,book books[],int size)// see prototype
{
      int x = 0; int loc; bool found = false;
      char junk;
      string book_id,search;
      getline(in,search);
      in.ignore(10,'\n');
      remove(search);
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
}
void add_new_book(ifstream& in,book books[],int& size)// see prototype
{
    string header, writer, publisher, book_id,other;
    char junk;
    int num_auth,copies_in_stock;
    double price_of_book;

        getline(in,header);
        in >> num_auth;
        in.get(junk);
        author_check(in,num_auth,writer);
        getline(in,publisher);
        in.get(junk);
        in >> book_id;
        in.get(junk);
        in >> price_of_book;
        in.get(junk);
        in >> copies_in_stock;
        books[size-1].set_list(header,num_auth,writer,publisher,
                        book_id,price_of_book,copies_in_stock); //sets the values to the object array
        in.get(junk);   //grabs the end line character
        size++;
        sort(books,size);
        writer ='\0';
}
void check_copies(ifstream& in,book books[],int size)// see prototype
{
      int x = 0; int loc; bool found = false;
      string book_id,search;

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
}
void increase_copies(ifstream& in, book books[],int size)// see prototype
{
      int x = 0; int loc; int copies;
      bool found = false;
      string book_id,search; char junk;
      in >> search; in.get(junk);in >> copies; // get the isbn the space and number of copies
      remove(search);
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
void decrease_copies(ifstream& in, book books[],int size)// see prototype
{
      int x = 0; int loc; int copies; int num_of;
      bool found = false;
      string book_id,search; char junk;

      in >> search;in.get(junk); in >> copies; // get the isbn the space and number of copies
      remove(search);
      while(x < size -1 && !found)
      {
          if( books[x].get_isbn(book_id) == search)
              {
                found = true;
                books[x].get_copies(num_of);
                if( num_of > copies) // make sure the copies that are going to be minused is lower the current copies
                   books[x].decrease(copies);
                else
                  cout << "Invalid amount of copies to decrease\n"; // output error if the decrease is larger the copies instock
              }
      x++;
      }
}
void remove(string& search) // remove dash within the user defined isbn
{
     int dash = search.find('-');
     while(dash != -1)
      {
          search = search.erase(dash,1); // keep updating search until there is no dash
          dash = search.find('-'); // update where the dash is
      }

}
void remove_book(ifstream& in,book books[],int& size)
{
      int x = 0; char junk;
      string book_id, search;
      getline(in,search);
      remove(search); // call the remove dash
      while(x < size -1 && books[x].get_isbn(book_id) != search)
      {x++;}

       for(x;x<size-1;x++) // remove the book
           books[x] = books[x+1];
   size--;
}
