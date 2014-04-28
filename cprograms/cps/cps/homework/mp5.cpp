/*
Author: Brian Rundel
CPS 171 SEC 02
Phil Geyer
This program takes as input from a file that assumes there is no
bad data in it. It takes the first 3 characters in the file and converts
them to the approprate status. The three characters are M or F male or female
M,D,W,S for the marrage status and the last character is a D or N for Dr. or
not. After the first three characters you there is a last name followed by
the first name and middle Initial if any. There could be any amount of spaces
between the last,first and middle if any. The Program takes this non-standardized
form of input and converts it to standardized from with out needing to know where
spaces are between the names. It then will count the people that have a degree and
people that don't have one. It will also count the marrage status of people too.
example of input and output
MMD Torvalds,          Linus       B.
converted
Dr. Linus B. Torvalds
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Enum varialbe
enum if_married{MARRIED,SINGLE,DIVORCED,WIDOWED} status;
// Function prototypes
if_married marrage(string,int&,int&,int&,int&);
string prefix(string,if_married,int&,int&);
string mid(string);
string last_names(string);
string first_name(string);

int main()
{
    // declair variables to hold names and counts
    ifstream infile; ofstream out;
    int wed = 0; int div = 0; int sin = 0; int wid = 0;
    int degree = 0; int no_degr = 0;
    string line,pre,first,middle,last;
    infile.open("names"); // file where the data is
    out.open("outnames.txt"); // to store the output
    if(!infile) // check to see if the file exists
    {
        cout << "Files does not exist or not in path";
        return -1; // error code
    }
    // prime in read
    getline(infile,line);
    while(infile)
    {    //counts the amount of people married and returns their status
         status = marrage(line,wed,div,sin,wid);
         // converts the status to Mr, Mrs and Dr, etc
         pre = prefix(line,status,degree,no_degr);
         //gets the first name
         first = first_name(line);
         // gets the middle initail
         middle = mid(line);
         // gets the last name
         last = last_names(line);
          //Output to the file
          out << setw(52) << line;
          out << right  << setw(5) << pre
              << left << setw(8) << first
              << left  << setw(5) << middle
              << left << setw(14) << last << endl;
         //get the line again
         getline(infile,line);
    }//end of while loop
    out  << endl;
    out << setw(30)   << setfill('*') << "*" << endl;
    out << "Married " << wed << endl;
    out << "Divorced "<< div << endl;
    out << "Single "  << sin << endl;
    out << "Widowed " << wid << endl;
    out <<  setw(30)  << setfill('*') << "*" << endl;

    return 0;
}

string last_names(string name)
{
    int tracker = 3; // starts at position 3
    while(name.substr(tracker,1) == " ")
          tracker++; // as long as its a space
                    // keep going and adding one to tracker
    int sec = tracker; //set the second tracker to tracker

    while(name.substr(sec,1) != ",")
            sec++;//keep adding one to sec as long as its not a ,

    return name.substr(tracker,sec - tracker); // return whats found
}

string first_name(string fir)
{
    int position = fir.find(",") + 1; // start at where ever a , is and add one
    string::size_type size = fir.size(); // just in case know the size
    while(fir.substr(position,1) == " ")
          position++; // if its a spaces keep adding on to position
                      // until its not
    int sec_pos = position;

    while(fir.substr(sec_pos,1) != " " && sec_pos < size)
          sec_pos++; // keep going unless the sec gets bigger the the
                    // size of the string.
    return fir.substr(position,sec_pos - position); // return whats found
}

string mid(string middle)
{
    string mid;
    int start = middle.find("."); // start at where a period is
    if(start < 8) // if the npos happened just exit or if its not
       return " ";// or if its not at less 8 characters in
        start -= 2;
     mid = middle.substr(start,3);
     mid = toupper(mid[1]);
    return mid + "."; // return whats found
}
if_married marrage(string pre,int& w,int& d,
                   int& s,int&ww)
{
    switch(pre[1])
    {
        case 'M': w++;  return MARRIED; // count the married
        case 'S': s++;  return SINGLE;  // count the single
        case 'D': d++;  return DIVORCED;// count the divorced
        case 'W': ww++; return WIDOWED; // count the widowed
    }
}
string prefix(string gen,if_married mar,int& doc,int& no_doc)
{
    if(gen[2] == 'D')
       {
           doc++;
           return "Dr."; // if the person is a doctor just return Dr.
       }
      no_doc++;
    if(gen[0] == 'F')
        {
            if(mar == MARRIED)
               return "Mrs."; // if the person is a female and married
            else
            return "Ms."; // if not
        }
    else
       return "Mr."; // it only could be a Mr at this point
}
