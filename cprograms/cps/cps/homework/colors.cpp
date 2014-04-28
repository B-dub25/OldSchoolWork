/*
CPS 171 SEC 02
Due Date 10/02/12
Professor = Phil Geyer.
Author: Brian Rundel

This program will read input from a file
that holds three characters that represent
colors. The characters are in the form of
primary, secondary and tint. If the any of the
colors will result into a invalid color set,
it will report it as a illegal combination
and list the invalid color as invalid.

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    //Set up the files for the output & input.
    ifstream infile;
    ofstream outfile;

    //Set variables for primary, secondary and third.
    char first, secan, third;
    char color1, color2, color3;
    //Set up variables for the results of primary and so on.
    string primary, secondary, result,TINT,color;

    //Open the files for data input and output
    infile.open("mp3colors.txt");
    outfile.open("outcol");

    // Make sure the file exist and if it doesn't exit.
    if (!infile)
    {
        cout << "File does not exist. Please check the location";
        return 1;
    }
    //Gather the colors and tint.
    infile >> first >> secan >> third;
    color1 = tolower(first);
    color2 = tolower(secan);
    color3 = tolower(third);

   //Set up a header for the colors and the colors combinations
   //with the results.
    cout << right << setw(17) << "1st COLOR  "
         << setw(15) << "2nd COLOR  " << left << setw(10)
         << "  TINT " << right <<setw(12) << " RESULT " << endl;
    cout << endl;

    while(infile)
    {

        switch(color1) // get the first color in the set
        {
          case 'r':
                   primary = "RED";
          break;

          case 'b':
                   primary = "BLUE";
          break;

          case 'y':
                   primary = "YELLOW";
          break;

          case 'g':
                   primary = "GREEN";
          break;

          case 'o':
                   primary = "ORANGE";
          break;

          case 'v':
                   primary = "VIOLET";
          break;

          default:
                  color = "";
                  primary = "INVALID";

        } // End of first switch statement.

        switch(color2) // Get the secondary color.
        {
           case 'g':
                    secondary = "GREEN";
                    if (primary == "RED")
                        color = "BROWN";
                    else if (primary == "YELLOW")
                        color = "YELLOW GREEN";
                    else if (primary == "BLUE")
                        color = "BLUE GREEN";
                    else
                    color = "";

           break;

           case 'o':
                    secondary = "ORANGE";
                    if (primary == "RED")
                        color = "RED ORANGE";
                    else if (primary == "YELLOW")
                         color = "YELLOW ORANGE";
                    else
                         color = "";
           break;

           case 'v':
                    secondary = "VIOLET";
                    if ( primary == "RED" )
                        color = "RED VIOLET";
                    else if ( primary == "BLUE")
                        color = "BlUE VIOLET";
                    else
                    color = "";
           break;

           case 'r':
                    secondary = "RED";
                    if (primary == "BLUE")
                       color = "VIOLET";
                    else if (primary == "GREEN")
                       color = "BROWN";
                    else if (primary == "YELLOW")
                        color = "ORANGE";
                    else if (primary == "ORANGE")
                        color = "RED ORANGE";
                    else if (primary == "VIOLET")
                        color = "RED VIOLET";
                    else
                    color ="";

           break;

           case 'y':
                    secondary = "YELLOW";
                    if (primary == "BLUE")
                        color = "GREEN";
                    else if (primary == "RED")
                         color = "ORANGE";
                    else if (primary == "GREEN")
                         color = "YELLOW GREEN";
                    else
                    color = "";
           break;

           case 'b':
                    secondary = "BLUE";
                    if (primary == "YELLOW")
                        color = "GREEN";
                    else if (primary == "RED")
                        color = "VIOLET";
                    else if (primary == "VIOLET")
                        color = "BLUE VIOLET";
                    else if (primary == "GREEN")
                         color = "GREEN BLUE";
                    else
                    color = "";
           break;
           default:
                   color = "";
                   secondary = "INVALID";

        } // End of second switch.

       switch(color3) // Run through to see what the tint is.
       {
           case 'w':
                    TINT = "WHITE";
                    if (primary == "INVALID" || secondary == "INVALID")
                        result = "ILLEGAL COMBINATIONS";
                    else
                        result = "LIGHT";
           break;

           case 'k':
                    TINT = "BLACK";
                    if (primary == "INVALID"|| secondary == "INVALID")
                        result = "ILLEGAL COMBINATIONS";
                    else
                        result = "DARK";
           break;

           case 'n':
                    TINT = "NEUTRAL";
                    if (primary == "INVALID" || secondary == "INVALID")
                        result = "ILLEGAL COMBINATIONS";
                    else
                        result = "";
           break;
           default:
                   TINT = "INVALID";
                   result = "ILLEGAL COMBINATIONS";

          } // End of switch for tint.

        if (result == "")
             result = "ILLEGAL COMBINATIONS";

      //If the color is blank and the two colors are the same
      //set color to the primary color.
      if (color == "" && secondary == primary)
          color = primary;

      // If the result is invalid print it out.
      if (result == "INVALID" || result == "ILLEGAL COMBINATIONS")
           cout << left << first << secan
                << setw(4) << third << left
                << setw(15) << primary << setw(13)
                << secondary << left << setw(13) << TINT
                << result << endl;

      else // If there is no errors in the results print the colors
           cout << left << first << secan
                << setw(4) << third << left
                << setw(15) << primary << setw(13)
                << secondary << left << setw(13) << TINT
                << result << " " << color << endl;

    infile >> first >> secan >> third; // Grab the colors again

    color1 = tolower(first);
    color2 = tolower(secan);
    color3 = tolower(third);

    } // End of while loop

         return 0;
}
