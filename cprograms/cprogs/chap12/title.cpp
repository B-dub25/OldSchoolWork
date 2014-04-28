/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <iomanip>
#include "book.h"

using namespace std;

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
void book::decrease_price(double deduction)
{
    if(deduction <= price) // check to make sure the deduction is valid
        price = price - deduction;
}
void book::increase_price(double amount)
{
    price = amount + price;
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
string book::get_isbn() const
{
    return isbn;
}
string book::get_title() const
{
    return title;
}
string book::get_author_name() const
{
    return auth;
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
