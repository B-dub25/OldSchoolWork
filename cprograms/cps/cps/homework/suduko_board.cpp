/*
Author Brian Rundel
Created on: November 23, 2012 5:04 PM
This program takes as input from a file a 9x9 matrics of numbers and makes a sudoku board.
It assumes that all numbers are valid meaning <=1 >=9 and checks if there is any duplicates
in rows and columns throughout the matrics. If there is a duplicate anywhere within the
board is reports the row number and column that it has occured in. It will also check whether
or not there is a duplicate within a grid because a number only can appear once within a 3x3
grid. Andn if there is a duplicate it reports there a duplicate within a grid. It also takes
commands from the file, A for add D for display, N for new game and R for remove. If and when
te A command comes into play the program will verify that the number passed to it will valid
and if not it will report if not.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

const int ROWS = 9; // max rows for the array
const int COLS = 9; // max columns for the array

void display_board(char boad[][COLS]); // to display the board when called
void make_board(ifstream& ,char bor[][COLS]); // make up the board
void small_grid(char bord[][COLS],int,int); // check 3x3 grids for duplicates
void check_rows(char bor[][COLS]); // checks the rows for dupicates in the 9x9
void check_col(char bords[][COLS]); // checks the columns for duplicates in the 9x9
bool check(char game[][COLS],int,int,char); //check bofore adding a character to the array.
bool user_grid(char boars[][COLS],int row, int col, char num); // checks the added number within 3x3 grid for duplicates
bool number_check(int,int,char);
int main()
{
    ifstream infile; infile.open("board"); //open the file
    char board[ROWS][COLS]{0}; char num; char ch; int f; //setup the array and number for adding and the gettin of the commands
    int row = 0; int col = 0; // for file input row and column for adding
    char junk;
    if(!infile) // error message if the file does not exist
    {
        cout << "File does not exist or not in present path\n";
          return 404; // error code
    }
    else

    infile.get(ch);
    infile.get(junk);//grab the newline character.
    while(infile) // send the character through the switch to see what to do
    {
        switch(ch)
        {
            case 'N': make_board(infile,board);
                      check_rows(board);
                      check_col(board);
                      for(row=0;row<ROWS;row=row+3) // check the 3x3 grids
                        for(col=0;col<COLS;col=col+3)
                      small_grid(board,row,col); // pass the row and col to function
                      break;
            case 'A': infile >> row >> col >> num;// grab the row column and number
                      if(number_check(row,col,num))
                      if(check(board,row,col,num) && user_grid(board,row,col,num)) //if everything is good
                         board[row][col] = num; // add the number
                      else  cout << "invalid move can't add "
                                << num << " to row " << row<<"\n";
                      break;
            case 'R': infile >> row >> col; board[row][col] = ' '; // remove the number
                      break;
            case 'D': display_board(board); // display the board
                      break;
        }
        infile >> ch; // grab the next command
    }
     return 0;
}
bool number_check(int ro,int co,char n) // make sure the numbers passed are valid
{
    if('0'>=n)
      return false;
    if ('9'<n)
       return false;
    if(ROWS<ro)
      return false;
    if( COLS<co)
      return false;
  return true;
}
void display_board(char boar[][COLS])
{
    for(int row = 0; row < ROWS; row++)
       {
           for(int col = 0; col < COLS;col++)
             cout << boar[row][col]; // display the 9x9 matric
             cout << endl;
       } // end line
}
void make_board(ifstream& in, char bord[][COLS])
{
    char junk;
    for(int ro = 0; ro <ROWS; ro++)
      {
       for(int co = 0; co<COLS; co++)
         in.get(bord[ro][co]); // gather the numbers for the array
         in.get(junk);  // to grab the newline character.
      }

}
void check_col(char bords[][COLS])
{
    char num;
    for(int ro = 0; ro < ROWS; ro++)
       for(int col = 0; col < COLS;col++)
       {
           num = bords[ro][col]; // set the number to search .
           for(int x = 1+col;x<COLS;x++)
              {
                if(num == bords[ro][x] && num!= ' ')
                {
                 cout << "Duplicate "<< num <<" in row " << ro+1
                      << " column " << col+1 << " and " << x+1 <<" \n";
                }
              }//end of second columns for loop
       }// end of columns for loop
}
void check_rows(char bor[][COLS])
{
char num;int x=0;
int col = 0;int row=0;int ro=0;
    for(col=0;col<COLS;col++)
    {
        num=bor[row][col];
        for(row=0;row<ROWS-1;row++)
          {
              num = bor[row][col]; // set the number up for searching
              for(ro=1+row;ro<ROWS;ro++)
                  if(num == bor[ro][col]&& num != ' ')
                   cout << "Duplicate "<< num << " in row " << ro+1
                       << " and " << row+1 <<" column " << col+1<<"\n";
          }
    }

}
bool check(char game[][COLS], int row, int col, char num)
{
    bool c_ok=true;
    for(int c = 0; c < COLS;c++)
        if(game[row][c] == num)
          return false;
    for(int r = 0; r < ROWS;r++)
        if(game[r][col] == num)
            return false;
    return true
}
void small_grid(char boars[][COLS],int row, int col)
{
    int start = 0; int end = 0; char num;
    int start2 = 0; int end2 = 0; int ro=0;int c=0;int co=0;
    switch(row/3)
    {
        case 0: start = 0; end = 3;break;
        case 1: start = 3; end = 6;break;
        case 2: start = 6; end = 9;break;
    }
    switch(col/3)
    {
        case 0: start2 = 0; end2 = 3;break;
        case 1: start2 = 3; end2 = 6;break;
        case 2: start2 = 6; end2 = 9;break;
    }
    for(ro = start; ro < end-1;ro++)
      {
      for(co = start2; co<end2;co++)
        {
         num = boars[ro][co];
        for(c=1+co;c<end2;c++)
           if( num == boars[ro+1][c]&& num!= ' ')
               cout <<"Duplicate "<< num << " in grid\n";
        }
      }
}
bool user_grid(char boars[][COLS],int row, int col, char num)
{
    bool is_ok = true;
    int start = 0; int end = 0;
    int start2 = 0; int end2 = 0;

    switch(row/3)
    {
        case 0: start = 0; end = 3;break;
        case 1: start = 3; end = 6;break;
        case 2: start = 6; end = 9;break;
    }
    switch(col/3)
    {
        case 0: start2 = 0; end2 = 3;break;
        case 1: start2 = 3; end2 = 6;break;
        case 2: start2 = 6; end2 = 9;break;
    }
    for(int x = start; x < end-1; x++)
      for(int c = start;c< end2; c++)
             if(boars[x][c] == num)
                   {
                       cout << "Invalid:There will"
                            << " be duplicate in grid can't add "
                            << num << "\n";
                            is_ok = false;
                   }
   return is_ok;
}
