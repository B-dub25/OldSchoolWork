/*
Author: Brian Rundel
This program will take as input a woman's weight; wrist
measurement, waist measurement, hip measurement, fore-
arm measurement to calculate her body fat. It will do
body wieght; wrist measurement for a man to determine
the body fat. The program assumes that all inputs are
valid one's that it asks for
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Women's formula for body fat;
const double WOM_BODY_WEIGHT = 0.732; const double WOM_BODY = 8.987;
const double WOM_WRIST = 3.140;       const double WOM_WAIST = 0.157;
const double WOM_HIP = 0.249;         const double WOM_FOREARM = 0.434;
// Men's formula for body fat;
const double MEN_BODY_WEIGHT = 1.082; const double MEN_BODY = 94.42;
const double MEN_WRIST = 4.15;

int main()
{
    double wrist, hip, waist;
    double body_fat, body_fat_percent;
    double A1, A2 ,A3 ,A4 ,A5 ,B;
    double forearm, weight, total;

    string gender;

    cout << "Please Enter your gender (man or woman) ";
    getline(cin,gender);

    if (gender == "man")
    {
        cout << "Enter your body weight ";
        cin >> weight;
        cout << "Enter your wrist measurement ";
        cin >> wrist;

        A1 = (weight * MEN_BODY_WEIGHT) + MEN_BODY;
        cout << A1 << endl;
        A2 = wrist * MEN_WRIST;
        B = A1 - A2;
        cout << A2 << " " << B << endl;
        body_fat = B - weight;
        body_fat_percent = ( body_fat * 100 ) / weight;

        cout << "Your weight is: " << weight << endl;
        cout << "Your wrist measurement is: " << wrist << endl;
        cout << "Your body fat is: " << body_fat << endl;
        cout << "Your body fat perent is: %" << body_fat_percent << endl;
    }

    else if (gender == "woman")
    {
         cout << "Enter your weight ";
         cin >> weight;
         cout << "Enter your wrist measurement ( at fullest point ) ";
         cin >> wrist;
         cout << "Enter your waist measurement ( at navel ) ";
         cin >> waist;
         cout << "Enter your hip measurement ( at fullest point ) ";
         cin >> hip;
         cout << "Enter your forearm measurement ( at fullest point ) ";
         cin >> forearm;

         A1 = ( weight * WOM_BODY_WEIGHT ) + WOM_BODY;
         A2 = wrist / WOM_WRIST;
         A3 = waist  * WOM_WAIST;
         A4 = hip * WOM_HIP;
         A5 = forearm * WOM_FOREARM;
         B = A1 + A2 - A3 - A4 + A5;

         body_fat = weight - B;
         body_fat_percent = ( body_fat * 100 ) / weight;

         cout << "Your weight is " << weight << endl;
         cout << "Your wrist measurement " << wrist << endl;
         cout << "Your waist measurement " << waist << endl;
         cout << "Your hip measurement " << hip << endl;
         cout << "Your forearm measurement " << endl;
         cout << "Your body fat: " << body_fat << endl;
         cout << "Your body fat percent: %" << body_fat_percent << endl;

         cout << "Thank you for using weight calculator " << endl;
    }
         return 0;



}
