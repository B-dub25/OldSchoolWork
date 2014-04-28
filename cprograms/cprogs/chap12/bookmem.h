#ifndef BOOKMEM_H_INCLUDED
#define BOOKMEM_H_INCLUDED



#endif // BOOKMEM_H_INCLUDED
#include <string>
#pragma once
using namespace std;

class memberType
{
    public:
           void set_info(string,int,int,double);
           //This will set the customers name, member ID
           //total books bought and the amount spent so far
           void get_info(string&,int&,int&,double&);
           //This retrieves the customers information
           void print_mem() const;
           void add_books(int);
           //This will update the amount of books bought
           //by the customer.
           void minus_books(int);
           //subtracts books from total.
           void add_spent(double);
           //This will update the total spent by the customer.
           void subtract_spent(double);
           //subtracts money spent for returns and such.
           int get_books(int) const;
           //This get the total books bought by the customer only.
           int retrieve_id() const;
           //This will retieve only the customers ID
           void update_info(string,int,int);
           //This will update customer information
           string get_name() const;
           memberType();
    private:
            string person_name;
            int mem_id;
            int books_bought;
            double spent;
};
