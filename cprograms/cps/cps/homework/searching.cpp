/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <fstream>

using namespace std;

const int COLS = 9;
const int ROWS = 9;

void make_board(ifstream&,char ar[][COLS]);
void column_check(char arr[][COLS]);
void row_check(char a[][COLS]);
void grid_check(char array[][COLS]);
int main()
{
    ifstream infile; // set up the var for the file
    infile.open("board"); // open the file
    char board[ROWS][COLS]; // get the array set up

    make_board(infile,board); // make the board as the function name states
    column_check(board); // check the initail input columns for duplicates
    row_check(board);    // check the initail input rows for duplicates

    return 0;
}

void make_board(ifstream& in,char ar[][COLS])
{
    for(int r = 0; r < ROWS ; r++) // populate the board for the game
        for(int c = 0; c <= COLS;c++) //
               in.get(ar[r][c]); // place the values in the correct place
}
void column_check(char arr[][COLS])
{
    int x =0;
    while(x < ROWS - 1) // to control the times i go through the array
    {
        for(int r = 0; r < ROWS;r++) // to control the rows
            for(int c = x+1; c < COLS;c++) // to control the columns
                if(arr[r][x] == arr[r][c] && arr[r][x] != ' ') // do a compairison
                    cout << "Row(s) " << r +1
                         << " columns " << x+1 << " "
                         << c +1<< "\n"; // out put the results if any
        x++; // update the control
    }
}
void row_check(char a[][COLS])
{
    int x =0; int j;
    while(x<ROWS - 1) // To control how many times I go through the rows
    {                //and to control the columns so the columns stay the same
      for(j =0;j< ROWS;j++)  //  // to compair the rows.
           if(a[j][x]== a[j+1][x])
        cout << "Rows " << j+1 << " and " // The plus one is just for readability
             << j+2 << " are invalid\n"; // The + 2 is just for readability
      x++; // update the control
    }
}
void grid_check(char array[][COLS])
{

}
