/*
Author Brian Rundel
Created on: Nov 21,2012 Wed.

*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int ROWS = 9; const int COLS = 10;
void display(char board[][COLS]);
void make_board(ifstream&,char board[][COLS]);
void add_num(char boa[][COLS],int,int,int);
bool check_rows(char bo[][COLS]); bool check_col(char b[][COLS]);
bool add_check(char boa[][COLS],int,int,int);

int main()
{
    ifstream infile;
    char ch; char board[ROWS][COLS];
    int row, col;char num;
    infile.open("board");
    if(!infile)
    {
        cout << "File does not exist or not in path\n";
          return 404;
    }
    infile.get(ch);
    while(infile)
    {
        switch(ch)
        {
            case 'N': make_board(infile,board);break;
            case 'A': infile >> row >> col >> num;
                      if(!add_check(board,row,col,num))
                      board[row][col] = num;else cout <<
                      "Invalid move can't add " << num << " at "
                      << "row "<<row+1 << " column " << col<<"\n";
                      break;
            case 'R': board [row][col]=' ';
                      break;
            case 'D': display(board); cout << endl; break;
        }
        infile.get(ch);
    }
        return 0;
}
bool add_check(char boa[][COLS],int r,int c,int n)
{
    int x = 0;
    bool found = false;
    while(x < COLS && !found)
    {
        if(boa[r][c] == boa[x][c])
            found = true;
        if(boa[r][x] == boa[r][c])
            found = true;
     x++;
    }
   return found;
}
void display(char board[][COLS])
{
    for(int x = 0;x< ROWS;x++)
       for(int c =0;c < COLS;c++)
           cout << board[x][c];
}
void add_num(char bor[][COLS],int ro,int co,int nu)
{
    bool found = false; int x =0;
    while(x < COLS-1 && !found)
    {
        if(bor[ro][x] == nu)
           found = true;
        else
        x++;
    }
 if(found)
     bor[ro][co] = nu;
}
void make_board(ifstream& in,char bo[][COLS])
{
    for(int x = 0; x < ROWS;x++)
       for(int c=0;c < COLS;c++)
           in.get(bo[x][c]);

check_rows(bo);
check_col(bo);
}
bool check_rows(char bo[][COLS])
{
    bool is_ok = true;
    for(int r= 0;r<= ROWS;r++)
     for(int x = 1+r; x <= ROWS ;x++)
       for(int y = 0; y < COLS-1;y++)
           cout << bo[y][r];
    return is_ok;
}

bool check_col(char bo[][COLS])
{
     bool is_ok = true;
     for(int x = 0; x < ROWS; x++)
        for(int y = 0; y < COLS; y++)
           for(int z = 1+y; z < COLS;z++)
                  if(bo[x][y] == bo[x][z])
                      cout << "Duplicate in row " << x+1
                           << " in column " << y << "\n";
}
