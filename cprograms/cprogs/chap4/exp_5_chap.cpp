/*
Author: Brian Rundel
This program will format the data so
it places the ID and name with the
proper votes.
                                      */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int ID,num,sum,counter;
	char ch;
	ifstream infile;
	ofstream offile;

	string name;

	infile.open("ID");
	infile >> ID;

    cout << counter << endl;
	while (infile)
	{
	    infile.get(ch);
	    getline(infile, name);
	    sum = 0;
	    infile >> num;
	    while (num != -999)
	    {
	        sum = sum + num;
	        infile >> num;
	    }
	    cout << "Name: " << name
	          << " Votes " << sum
	            << endl;
       infile >> ID;
	}
	return 0;
}
