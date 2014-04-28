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
and if not it will report if not. It also checks to see if the row and column nuber is valid
or not and reports if it isn't.
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int ROWS = 9; // max rows for the array
const int COLS = 9; // max columns for the array
void intte(char boar[][COLS]);
void display_board(char boad[][COLS]); // to display the board when called
void make_board(ifstream& ,char bor[][COLS]); //make up the board
void small_grid(char bord[][COLS],int,int); // checks initial 3x3 grids for duplicates on first input
void check_rows(char bor[][COLS]); //checks initail rows for dupicates in the 9x9 on first input
void check_col(char bords[][COLS]); // checks initial columns for duplicates in the 9x9 on first input
bool check(char game[][COLS],int,int,char); //checks columns before adding a character to the array.
bool user_grid(char boars[][COLS],int row, int col, char num); // checks the added number within 3x3 grid for duplicates
bool number_check(int,int,char); // checks and makes sure the number, row and column number is valid.
bool check_r(char game[][COLS], int row, int col, char num); // checks for duplicates in the row the numbre is going to be added

int main()
{
    ifstream infile; infile.open("board"); //open the file
    char board[ROWS][COLS]{0}; char num; char ch; int f; //setup the array and number for adding and the gettin of the commands
    int row = 0; int col = 0; // for file input row and column for adding
    char junk;
    intte(board);
    if(!infile) // error message if the file does not exist
    {
        cout << "File does not exist or not in present path\n";
          return 404; // error code
    }
    else
    infile.get(ch); //grab the command
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
                      if(user_grid(board,row-1,col-1,num)&& number_check(row,col,num)
                         && check(board,row-1,col-1,num) && check_r(board,row-1,col-1,num)) //if everything is good
                         board[row-1][col-1] = num; // add the number
                      break;
            case 'R': infile >> row >> col; board[row-1][col-1] = ' '; // remove the number
                      break;
            case 'D': display_board(board);cout << endl; // display the board
                      break;
        }
        infile >> ch; infile.get(junk); // grab the next command and grab the newline character.
    }
     return 0;
}
bool number_check(int ro,int co,char n) // make sure the numbers passed are valid
{
    bool ro_ok = true; bool co_ok = true;bool nu_ok=true;
    if(ro-1 >= ROWS || ro - 1 <=0)
       {
        if(ro-1 ==0 ) // if its 0 make the ro variable 0 not -1 for out put reasons only
           ro=0;
        cout << "Invalid:Row number " << ro <<"\n" ;
        ro_ok=false;
       }

     if(co-1 >= COLS || co-1 <=0)
     {
         if(co - 1 == 0)
            co=0;
      cout << "Invalid:Column number " << co << "\n";

     }
     if(n > '9' )
     {
         cout << "Invalid number:Number is to high " << n<<"\n";
         nu_ok = false;
     }
     if(n <='0')
     {
          cout << "Invalid number:Number is to low " << n<<"\n";
          nu_ok = false;
     }
     if(ro_ok && co_ok && nu_ok)
  return true; // if all is ok and columns are valid return true to give the okay for further checking.
  else
   return false; // return false if all is not okay.
}
void display_board(char boar[][COLS])
{
    for(int row = 0; row < ROWS; row++)
       {
           for(int col = 0; col < COLS;col++)
             cout <<right <<setw(2)<< boar[row][col]; // display the 9x9 matric
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
void intte(char boar[][COLS])
{
    for(int r = 0; r < ROWS -1; r++)
       for(int c = 0; c < COLS; c++)
          boar[r][c] = ' ';
}
void check_rows(char bor[][COLS])
{
char num;int x=0;
int col = 0;int row=0;int ro=0;
num=bor[row][col]; // initail number to search for
    for(col=0;col<COLS;col++)
    {

        for(row=0;row<ROWS-1;row++)
          {
              num = bor[row][col]; // update the number up for searching
              for(ro=1+row;ro<ROWS;ro++)
                  if(num == bor[ro][col]&& num != ' ')
                   cout << "Duplicate "<< num << " in row " << ro+1
                       << " and " << row+1 <<" column " << col+1<<"\n";
          }
    }

}
bool check_r(char game[][COLS], int row, int col, char num)
{
    bool is_ok = true;

    for(int r = 0; r < ROWS;r++)
      if(game[r][col] == num) // hold the columns at the same point and only increment row to see if its a valid move
            {
                cout << "Invalid:There will be a duplicate if "
                     << num << " is added to row "
                     << row +1<< " at column " << col+1<<"\n";
              return is_ok=false;
            }
return is_ok;
}
bool check(char game[][COLS], int row, int col, char num)
{
    bool c_ok=true;
    for(int c = 0; c < COLS;c++)
        if(game[row][c] == num)
        {
            cout << "Invalid:There will be a duplicate if "
                     << num << " is added to row "
                     << row +1<< " at column " << col+1<<"\n";
            c_ok = false;
        }

    return c_ok;
}
void small_grid(char boars[][COLS],int row, int col)
{
    int start = 0; int end = 0; char num;
    int start2 = 0; int end2 = 0; int ro=0;int c=0;int co=0;
    switch(row/3)
    {
        case 0: start = 0; end = 3;break; //set the rows starting points and ending points for simple use.
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
           if( num == boars[ro][c]&& num!= ' ')
               cout <<"Duplicate "<< num << " in grid\n";
        }
      }
}
bool user_grid(char boars[][COLS],int row, int col, char num)//check the grid for duplicates after the file input
{
    bool is_ok = true;
    int start = 0; int end = 0;
    int start2 = 0; int end2 = 0;

    switch(row/3) // get the rows starting point and ending point for simplicity
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
    for(int x = start; x < end; x++)
      for(int c = start2;c< end2; c++)
             if(boars[x][c] == num) // search for the number
                   {
                       cout << "Invalid:There will"
                            << " be duplicate in grid can't add "
                            << num << "\n";
                            is_ok = false;
                   }
   return is_ok;
}
