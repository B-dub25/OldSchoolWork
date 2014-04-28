/*
Heading goes here

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// setup enums for gendar marrage and degree type.
enum degree {DOCTORATE, NO_DOCTORATE} doct;
enum marrage_status {MARRIED,SINGLE,DIVORCED,WIDOWED} status;

// setup function prototypes
string gender(string,int&);
marrage_status is_married(string,int&,int&,int&,int&,int&);
string convert(string,marrage_status);
string doc(string,int&,int&);

int main()
{
    int tracker = 0; int div = 0; int wid = 0; int sin = 0;
    int mar = 0; int docs = 0; ifstream infile; ofstream outfile;
    string sex , line,diploma;
    infile.open("names");

    // Error check goes here

    getline(infile,line);
    while(infile)
    {
        sex = gender(line,tracker);
        status = is_married(line,tracker,mar,div,wid,sin);
        diploma = doc(line,tracker,docs);
        cout << diploma;
        //cout << line << endl;
        getline(infile,line);
        tracker = 0;
    }
    return 0;
}

string gender(string gen,int& track)
{
    while(gen[track] == ' ')
          track++;
    return gen.substr(track,1);
}

marrage_status is_married(string stat,int& place,int& ma,int& de,int& wi,int& si)
{
     place++;
     while(stat[place] == ' ')
         place = place+ 1 ;

      switch(stat[place])
      {
          case 'M': ma++;  return MARRIED;
          case 'D': de++;  return DIVORCED;
          case 'W': wi++;  return WIDOWED;
          case 'S': si++;  return SINGLE;
      }
}

string doc(string deg, int& tra,int&con)
{
    tra++;
    string title;
    while(deg[tra] == ' ')
          tra++;

    if(deg[tra] == 'D')
        title = "DR.";
        return title;
}

