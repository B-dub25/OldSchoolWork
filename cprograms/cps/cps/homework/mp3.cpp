/*
CPS 171 SEC 02
Due Date 10/02/12
Professor = Phil Geyer.
Author: Brian Rundel

This program will read input from a file that holds three characters that may represent colors.
The characters are in the form of primary, secondary and tint. If the any of the colors will
result into a  color set, it will report it. If the set is an illegal combination of colors it
will report it as a invalid color set or if the color set is not of the appoved type it will report
it as illegal combinations of colors.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    int total_light = 0; int total_dark = 0;
    //Set up the files for the output & input.
    ifstream infile; ofstream outfile;
    //Set up variables for the results of primary and so on.
    char first, secan, third, color1, color2, tint3;
    string primary, secondary, result,tint,color;
    //Open the files for data input and output
    infile.open("mp3colors.txt");
    outfile.open("outcol");
    // Make sure the file exist and if it doesn't exit.
    if (!infile)
    {
        cout << "File does not exist. Please check the location\n";
        return 1;
    }
    //Gather the colors and tint.
    infile >> first >> secan >> third;
    color1 = tolower(first);
    color2 = tolower(secan);
    tint3 = tolower(third);
   //Set up a header for the colors and the colors combinations
   //with the results.
    outfile << right << setw(17) << "1st COLOR  "
            << setw(15) << "2nd COLOR  " << left << setw(10)
            << "  TINT " << right <<setw(12) << " RESULT " << endl;
    outfile << endl;
    while(infile)
    {
        switch(color1)//sort out the first color.
        {
            case 'r':
                     primary = "RED";
            break;
            case 'b':
                     primary = "BLUE";
            break;
            case 'g':
                     primary = "GREEN";
            break;
            case 'o':
                     primary = "ORANGE";
            break;
            case 'y':
                     primary = "YELLOW";
            break;
            case 'v':
                     primary = "VIOLET";
            break;
            default:
                    primary = "ILLEGAL";
                    result = "INVALID";

        }// End of first color switch
         switch(color2)//sort out the second color
         {
             case 'r':
                      secondary = "RED";
             break;
             case 'b':
                      secondary = "BLUE";
             break;
             case 'g':
                      secondary = "GREEN";
             break;
             case 'o':
                      secondary = "ORANGE";
             break;
             case 'y':
                      secondary = "YELLOW";
             break;
             case 'v':
                      secondary = "VIOLET";
             break;
             default:
                     secondary = "ILLEGAL";
                     result = "INVALID";
         }//End of the second switch statement.
          switch(tint3) // sort out the tint color
          {
              case 'n':
                       tint = "NEUTRAL";
                       result ="";
              break;
              case 'w':
                       tint = "WHITE";
                       result = "LIGHT ";
              break;
              case 'k':
                       tint = "BLACK";
                       result = "DARK ";
              break;
              default:
                      tint = "ILLEGAL";
                      result = "INVALID";
          }//End of tint switch statements.
       if (primary == "ILLEGAL" || secondary == "ILLEGAL" || tint == "ILLEGAL")
           result = "INVALID"; // Setting up for the different error type

  else if (primary == secondary)
           color = primary; //If the colors are the same set both to primary.
  else if ( primary == "RED" || secondary == "RED")
          {
           if (primary == "GREEN" || secondary == "GREEN")
               color = "BROWN";
           else if (primary == "ORANGE"|| secondary == "ORANGE")
                    color = "RED ORANGE";
           else if (primary == "BLUE" || secondary == "BLUE")
                    color = "VIOLET";
           else if (primary == "VIOLET" || secondary == "VIOLET")
                    color = "RED VIOLET";
           else
               result = "ILLEGAL COMBINATIONS";
            }

   else if (primary == "BLUE" || secondary == "BLUE")
            {
              if (primary == "YELLOW" || secondary == "YELLOW")
                  color = "GREEN";
              else if (primary == "VIOLET" || secondary == "VIOLET")
                       color = "BLUE VIOLET";
              else if (primary == "GREEN" || secondary == "GREEN")
                       color = "BLUE GREEN";
               else
                   result = "ILLEGAL COMBINATIONS";
            }
  else if (primary == "YELLOW" || secondary == "YELLOW")
            {
              if (primary == "ORANGE" || secondary == "ORANGE")
                  color = "YELLOW ORANGE";
              else if (primary == "GREEN" || secondary == "GREEN")
                   color = "YELLOW GREEN";
              else if (primary == "RED" || secondary == "RED")
                    color = "ORANGE";
              else
                  result = "ILLEGAL COMBINATIONS";
            }
       else //Just in case there is color combinations missed.
         result = "ILLEGAL COMBINATIONS";
       //If there was a error in the color check output it.
   if (result == "INVALID" || result == "ILLEGAL COMBINATIONS")
          {
           outfile << left << first << secan
                   << setw(4) << third << left
                   << setw(15) << primary << setw(13)
                   << secondary << left << setw(13) << tint
                   << result << endl;
          }
   else //Display the results of the error free output.
       outfile << left << first << secan
               << setw(4) << third << left
               << setw(15) << primary << setw(13)
               << secondary << left << setw(13) << tint
               << left << result << color << endl;
    //Check the result and add one to light and dark
    if (result == "LIGHT ")
        total_light++;
    else if (result == "DARK ")
         total_dark++;
    // Grab the colors again
    infile >> first >> secan >> third;
    //convert the upper case letters to lower case if upper case
    color1 = tolower(first);
    color2 = tolower(secan);
    tint3 = tolower(third);

    } // while loop end.
   //Display the count of valid dark and light combinations
   outfile << left << "Total Dark:" << setw(10) << total_dark
           << "Total Light: " << setw(4) << total_light << endl;
       return 0;
}
