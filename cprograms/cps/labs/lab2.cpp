/*
Author:Brian Rundel
Class CPS 171 sec 02:
Due Date: 09/11/12
Professor: Phil Geyer
Lab work:
This will take as input a sting of charcters
and the cost of the poduct and the amount paid
then format the output to be pretty.
*/


#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
    double paid, cost, due;
    string name;
    int total;
    char ch;
    cout << fixed << showpoint << setprecision(2);

    cout << "What is the name of your farm? ";
    getline(cin,name);
    cout << "How many carrots did you want? ";
    cin >> total;
    cout << "What is the cost of the carrots? ";
    cin.ignore(100,'$');
    cin  >> cost;
    cout << total << " carrots bought at " << cost
          << " each will cost you " << (total * cost) << endl;
    cout << "How much money did you give me? ";
    cin.ignore(100,'$');
    cin >> paid;


    cout << "You bought " << total << " carrots " << "at "
          << cost << " each." << endl;


    cout << left << setfill('.') << setw(10)
          << "Amount paid: " << setfill(' ')<< right
          << "$ " << setw(5) << paid << endl;

    cout << left << setfill('.') << setw(10)
          << "Cost: " << setfill(' ') << right
           << "$"<< setw(5) << cost << endl;

    cout  << left << setfill('.') << setw(10)
          << "Cash returned: "<< setfill(' ') << right
           << "$ "<< setw(4) << paid - ( total * cost )<< endl;
    return 0;




    return 0;
}
/*
What is the name of your farm? Brian's Farm
How many carrots did you want? 23
What is the cost of the carrots? $0.45
23 carrots bought at 0.45 each will cost you 10.35
How much money did you give me? $20.00
You bought 23 carrots at 0.45 each.
Amount paid: $ 20.00
Cost: ....$ 0.45
Cash returned: $ 9.65
*/
