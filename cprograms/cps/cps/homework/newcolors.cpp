/*
Author: Brian Rundel
This program will read input from a file
that holds three characters that represent
colors. The characters are in the form of
primary, secondary and tint. If the colors will
result into a invalid color set it will report
it.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    //Set variables for primary, secondary and tint.
    char first, secan,tint;
    //Set up variables for the results of primary and so on.
    string pri, sec, result,TINT;
    //Open the files for data input and output
    infile.open("col");
    outfile.open("outcol");

    // Make sure the file exist and if it doesn't exit.
    if (!infile)
    {
        cout << "File does not exist. Please check the location";
        return 1;
    }
    //Gather the colors and tint.
    infile >> first >> secan >> tint;

   //Set up a header for the colors and the colors combinations
   //with the results.
    cout << right << setw(17) << "1st COLOR  "
         << setw(15) << "2nd COLOR  " << left << setw(10)
         << "  TINT " << right <<setw(12) << " RESULT " << endl;
    cout << endl;

   while(infile)
   {

   switch(first) //Check the first color
     {
       case 'r': //See if its red
                pri = "RED"; // if it is set pri to red

       break; //Break from the switch

       case 'b': //Check to see if its blue
                pri = "BLUE";
       break;
       case 'y': //check to see if its yellow
                pri = "YELLOW";
       break;
       default: //set it to illegal if its not a primary color.
               pri = "ILLEGAL";


      }
      switch (secan) //Check the second color
      {
          case 'g': //See if its green
                   sec = "GREEN ";

          break; //exit if it is
          case 'o'://see if its orange
                   sec = "ORANGE ";

          break; //exit if it is
          case 'v'://check to see if its violet
                  sec = "VIOLET ";

          break;//and exit if it s
          case 'r':
                  sec = "RED";

          break;
          case 'b':
                   sec = "BLUE ";
          break;
          default:
                   sec = "ILLEGAL";
      }
      switch(tint)
         {
             case 'k':
                      TINT = "BLACK ";
                      if (sec == "ILLEGAL" || pri == "ILLEGAL")
                          result = "ILLEGAL COMBINATIONS";
                      else
                           result = "DARK";

             break;
             case 'w':
                      TINT = "WHITE ";
                      if (sec == "ILLEGAL" || pri == "ILLEGAL")
                          result = "ILLEGAL COMBINATIONS ";
                      else
                          result = "LIGHT";
             break;
             case 'n':
                       TINT = "NEUTRAL";
                       if (sec == "ILLEGAL" || pri == "ILLEGAL")
                          result = "ILLEGAL COMBINATIONS";
                       else
                           result = "";
             break;
             default:
                      TINT = "ILLEGAL";
                      result = "INVALID";


         } // end of tint switch

          if (sec == pri && TINT != "ILLEGAL")
           cout << left << first << secan
                << setw(4) << tint << left
                << setw(15) << pri << setw(13)
                << sec << left << setw(13) << TINT
                << result<< " " << pri << endl;

     else if (result == "INVALID" || result == "ILLEGAL COMBINATIONS")
           cout << left << setw(1) << first << secan << left
                << setw(4) << tint << left
                << setw(15) << pri << setw(13) << sec
                << left << setw(13) << TINT << result << ""
                << endl;
     else if (TINT != "ILLEGAL" || result != "ILLEGAL COMBINATIONS")
           cout << left << first << secan
                << setw(4) << tint << left
                << setw(15) << pri << setw(13)
                << sec << left << setw(13) << TINT
                << result<< " " << pri << " "
                << sec << endl;

        infile >> first >> secan >> tint;
   } // end of while loop

   infile.close();
   outfile.close();
   return 0;
}
