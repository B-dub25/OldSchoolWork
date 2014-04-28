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

void pop_board(ifstream&,char board[][COLS]);
void display_board(char arr[][COLS]);
void duplicate_check(char ar[][COLS]);

int main()
{
   //Setup variables for the program
   char array[ROWS][COLS];
   ifstream infile; ofstream outfile;
   infile.open("board");

   //check to see if the file exist
    if(!infile)
      {
       cout << "File does not exist or no in present directory";
            return -1;
      }
    else
    while(infile)
    {
       pop_board(infile,array);
    }
        //array[8][6] = '3';
        array[8][0] = '8';
       display_board(array);

       duplicate_check(array);
   return 0;

}
void pop_board(ifstream& in, char board[][COLS])
{
   for(int r = 0; r < ROWS; r++)
   {
       for(int c = 0; c <= COLS; c++)
           in.get(board[r][c]); // populate the array.
   } // end of rows loop
}
void display_board(char ara[][COLS])
{
    cout << "Sudoku board time to play!! " << endl;
    cout << setw(23) << setfill('_') << " " << endl;
    cout << setfill(' ');
    for (int i = 0; i< ROWS;i++)
    {

           if(i % 3 == 0 && i != 0)   // if the row / 3 has no remainder the end the line
              cout <<"+------+------+------+" << endl; // this is only for formating reasons
              //cout <<"|";
        for(int j = 0;j < COLS;j++)
        {
            if(j % 3 == 0) // this is also only for formatting reasons to make the board look
                cout<<"|";        // good.
            cout << left << setw(2) << ara[i][j]; // outputs the 2-d array
        } // end of columes loop
            cout << "|"<<endl; // ends the line so there is no continueing numbers.
    } // end of rows loop
       cout <<"+------+------+------+" << endl;
}

void duplicate_check(char ar[][COLS])
{
  int x = 0;
  int i,j;
  // x is going to control rows
  while(x < ROWS - 1  )
  {
         for(i = 0; i < ROWS ;i++)
          for(j = x + 1; j < COLS; j++)
             if(ar[i][x] == ar[i][j])
                {
                 cout << "Row ";
                 cout << i + 1<< " Colume "<< x + 1<< " Row "
                       << i + 1 << " Colume " << j + 1 << " are invalid";
                }
     x++; // update the control value
   }//end of while loop
 }

