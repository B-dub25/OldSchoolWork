/*
Author: Brian Rundel
This program will convert Fahrenheit temperature
into Celsius and Kelvin
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double fahrBase = 32.0;
const double fahrFactor = 5.0 / 9.0;
const double kelvin = 273.15;

void convert(double& input);
void kelv(double& input);

int main()
{
    double input;

    cout << fixed << showpoint << setprecision(2);

    cout << "Please enter a temperature in Fahrenheit "
          << "to convert to Celsius an Kelvin. ";

    convert(input);   // Running the convert function to make the main cleaner
                     // This will calculate the fahrenheit temperture for us (see line 36);
    kelv(input);    // Using this function to convert and display in Kelvin (see lin 48 ).
    cout << endl;
   return 0;
}


void convert(double& input)
{
    double celsius;

    cin >> input;

    celsius = (input - fahrBase) * fahrFactor;
    cout << "The temperature of " << input << " degrees "
          << "Farhrenheit converts to " << celsius
            << " in Celsius " << endl;
}
void kelv(double& input)
{
    double Kelvin;
    Kelvin = (input - fahrBase) * fahrFactor + kelvin;

    cout << "The temperature of " << input
           << " degrees converts to " << Kelvin
             << " in Kelvin";
}

/*
output 1
Please enter a temperature in Fahrenheit to convert to Celsius an Kelvin. 79
The temperature of 79.00 degrees Farhrenheit converts to 26.11 in Celsius
The temperature of 79.00 degrees converts to 299.26 in Kelvin
output2
Please enter a temperature in Fahrenheit to convert to Celsius an Kelvin. 69
The temperature of 69.00 degrees Farhrenheit converts to 20.56 in Celsius
The temperature of 69.00 degrees converts to 293.71 in Kelvin
output3
Please enter a temperature in Fahrenheit to convert to Celsius an Kelvin. 55
The temperature of 55.00 degrees Farhrenheit converts to 12.78 in Celsius
The temperature of 55.00 degrees converts to 285.93 in Kelvin
*/
