/*
Author Brian Rundel
Created on Sun.11 Nov 2012
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int ROWS = 9;
const int COLS = 9;

void pop_board(ifstream&,int board[][COLS]);


int main()
{
   //Setup variables for the program
   int array[ROWS][COLS]
   ifstream infile; ofstream outfile;
   infile.open("board");

   //check to see if the file exist
    if(!infile)
      {
       cout << "File does not exist or no in present directory";
            return -1;
      }
    else

   return 0;

}
void pop_board(ifstream& in, board[][COLS])
{

}
