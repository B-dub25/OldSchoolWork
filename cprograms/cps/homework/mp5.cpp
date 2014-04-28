/*

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//enum varialbes
enum marrage {MARRIED,DIVORCED,SINGLE,WIDOWED} status;
//Function prototypes

marrage marraged_or(string,int&,int&,int&,int&);
string convert(string,marrage,int&,int&);
string name(string,int);
string first_name(string);

int main()
{
    // setup varaibles
    ifstream infile; ofstream outfile;
    int m_count = 0; int d_count = 0; int s_count = 0;
    int w_count = 0; int doct = 0; int no = 0; int tracker = 3;
    string line;

    infile.open("names");
    outfile.open("outnames");

    if(!infile)
    {
        cout << "File does not exist ";
           return -1;
    }

    getline(infile,line);
    while(infile)
    {

       // get the marrage status and count them
       status = marraged_or(line,m_count,d_count,s_count,w_count);
       cout << convert(line,status,doct,no);
       cout << " " << first_name(line) << " ";
       cout << name(line,tracker);
       cout << endl;
       getline(infile,line);
    }

    return 0;
}

marrage marraged_or(string mar,int& m,int& d,int& s,int& w)
{
    switch(mar[1])
    {
        case 'M': m++; return MARRIED;
        case 'D': d++; return DIVORCED;
        case 'S': s++; return SINGLE;
        case 'W': w++; return WIDOWED;
    }
}
string convert(string gen,marrage stat,int& edu_c,int&n)
{
    if(gen[2] == 'D')
    {
        edu_c++;
        return "Dr.";
    }
       n++;
       if(gen[0] == 'F')
       {
           if (stat == MARRIED)
                return "Mrs.";
           else
           return "Ms.";
       }
    return "Mr.";
}
string name(string place,int holder)
{
    holder = 3;
    string last;

    while(place[holder] == ' ')
          holder++;

    while(place[holder] != ',')
          {
           last += place[holder];
           holder++;
          }
   return last;
}

string first_name(string fir)
{
    int trac = fir.find(',')+1; // to find where to start.
    int max = fir.size(); // To tell when I need to stop if needed.
    string nam;

    while(fir[trac] == ' ')
       trac++;

    while(fir[trac] != ' ')
        {
            if( trac == max)
                break;
            nam += fir[trac];
            trac++;
        }

   return nam;
}
