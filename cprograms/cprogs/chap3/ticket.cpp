//****************************************************
//
// Author : Brian Rundel
// This program will find the gross of a tickets sold
// the percentage donated and amount donated. It will
// also calculate the net sales of the tickets sold.
//****************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int Adult_num_of_tickets,Child_num_of_tickets,totalNum;
    double Adult_price,Child_price,netsales;
    double gross,amount_donated,percentage;
    string movie_name;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the name of the movie ";
    getline(cin, movie_name );
    cout << "How many adult tickets total "
           << " and what was the price? ";

    cin >> Adult_num_of_tickets >> Adult_price;
    cout << endl;
    cout << "How many children tickets were sold "
           << " and what was the price? ";
    cin >> Child_num_of_tickets >> Child_price;
    cout << endl;
    cout <<"The precentage to be donated? ";
    cin >> percentage;
    cout << endl;

    totalNum = Adult_num_of_tickets + Child_num_of_tickets;

    gross = Adult_price * Adult_num_of_tickets
            + Child_price * Child_num_of_tickets;

    amount_donated = gross * percentage / 100;
    netsales = gross - amount_donated;

    cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
    cout << setfill('.') << left << setw(35) << "Movie Name: "
         << setfill(' ') << right << " " << setw(8) << movie_name << endl;
    cout << setfill('.') << left << setw(35)
          << "Number of Tickets Soled: "
           << setfill(' ') << right << setw(10) << totalNum
             << endl;
    cout << setfill('.') << left << setw(35) << "Gross Amount: "
          << setfill(' ') << right << " $" << setw(8) << gross << endl;
    cout << setfill('.') << left << setw(35)
          << "Percentage of Gross Amout Donated: "
          << setfill(' ') << right << setw(10) << percentage << "%"<< endl;
    cout << setfill('.') << left << setw(35) << "Amount Donated: "
          << setfill(' ') << right << " $"<< setw(8) << amount_donated << endl;
    cout << setfill('.') << left << setw(35) << "Net Sales: "
         << setfill(' ') << right << " $"<< setw(8) << netsales << endl;

         return 0;
}
