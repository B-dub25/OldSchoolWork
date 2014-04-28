#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED



#endif // BOOK_H_INCLUDED
#pragma once
#include <string>
using namespace std;
class book
{
    public:
    void increase(int);
    //This is to increase the number of copies for a book
    void decrease(int);
    //This is to decrease the number of copies for a book
    void increase_price(double);
    //This is to increase the price for a book.
    void decrease_price(double);
    //This is to decrease price for a book.
    void set_list(string,int,string,string,
                  string,double,int);
    // This function will gather the information needed
    // to fill the array. it expects a 3 strings , integer
    void get_list(string&,int&,string&,string&,
                  string&,double&,int&);
    //thie function will get the list of the author, number of authers,
    void print() const;
    //This is to print the books by title in sorted order
    void print_isbn() const;
    //This will print the books off by isbn
    void get_copies(int& ) const;
    //This will return the amount of copies there is of a given title
    string get_title() const;
    //This gets and returns the title of the book for sorting and searching.
    string get_isbn() const;
    //This is for searching for isbn
    string get_author_name() const;
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
