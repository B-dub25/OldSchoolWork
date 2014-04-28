//***************************************************
//
// Author :Brian Rundel
// This will get data from two files to calculate
// the number of tickets sold and what kind of they
// were. General, box,sidelines and premium tickets
//***************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream tickets;
    ifstream numberof;
    ofstream ticketdata;

    tickets.open("ticketsfile");
    numberof.open("numberoffile");
    ticketdata.open("ticketdata");

    double premium,sideline,box,general;
    double numOfPre,numOfSide,numOfBox,numOfGen;

    tickets >> premium >> sideline
             >> box >> general;
    numberof >> numOfPre >> numOfSide
             >> numOfBox >> numOfGen;

    ticketdata << fixed << showpoint;
    ticketdata << setprecision(2);

    ticketdata << "The total ticket sales for premium "
                 << "tickets is " << "$" << premium * numOfPre << endl;
    ticketdata << "The total ticket sales for sideline "
                << "tickets is " << "$"<< sideline * numOfSide << endl;
    ticketdata << "The total ticket sales for box  "
                << "tickets is " << "$"<< box * numOfBox << endl;
    ticketdata << "The total ticket sales for general "
                << "$"<<general * numOfGen << endl;

    tickets.close();
    numberof.close();
    ticketdata.close();

     return 0;
}
