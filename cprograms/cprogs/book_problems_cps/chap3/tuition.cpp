/*
Author Brian Rundel
CPS 171    Due date 9/11/12
Professor Phil Geyer
This program will calculate the tuition and fees for
WCC,EMU and UM. The program will ask for the amount
of credit hours you are going to take, the driving
distance for each school. The progam then will,
calculate the cost in gas; tuition and all fees
to give you the final cost for each school.
This program assumes that all inputs are valid and a
positive number i.e -1 is not a valid input! It also
assumes that all inputs are of a integer.
The program assumes that credit hours are greater then 0
*/

#include <iostream>
#include <iomanip>

using namespace std;


//Setting up constant values for calculation fees and tuition

const double WCC_CREDIT = 96.00;       const int ROUND_TRIP = 60 * 2;
const double EMU_CREDIT = 256.70;      const double EMU_GENERAL = 25.40;
const double EMU_TECH = 12.00;         const double EMU_STUDENT_UNION = 3.55;
const double EMU_BUSINESS_FEE = 58.20;
const double UM_FIRST_CREDIT = 874.00; const double UM_AFTER = 514.00;
const double UM_REGISTRATION = 80.00;  const double UM_STUDENT_ASSEMBLY = 7.19;
const double UM_LEGAL_FEE = 8.50;      const double UM_GOV_FEE = 1.50;

int main()
{
    int credit_hours;
    double mile_cost, umcost, emucost, wcc_cost;
    double umdistance, emudistance, wccdistance;

    //Setting the decimal place at two places
    cout << fixed << showpoint << setprecision(2);


    //Ask the user to input the the amount of credit hours
    //and driving distance along with the cost per mile.

    cout << "Welcome to the Tuition Calculator by Brian Rundel." << endl;
    cout << endl;
    cout << "Enter the number of credits: ";
    cin >> credit_hours;
    cout << "Enter your cost per mile (example: 0.25 of 25 cents ): ";
    cin >> mile_cost;
    cout << "Enter the distance to WCC: ";
    cin >> wccdistance;
    cout << "Enter the distance to EMU: ";
    cin >> emudistance;
    cout << "Enter the distance to UM : ";
    cin >> umdistance;

    //Calculating the cost of UM tuition. For const values see lines 25-27
    umcost = ((credit_hours -1 ) * UM_AFTER) + UM_FIRST_CREDIT
           + UM_REGISTRATION + UM_LEGAL_FEE
           + UM_STUDENT_ASSEMBLY + UM_GOV_FEE;

    //Calculating the cost of WCC tuition. For const values see line 1.
    wcc_cost = credit_hours * WCC_CREDIT;

    //Calculating the cost for EMU tuition. For EMU const values see lines 22-24
    //All fees for EMU are calculated by credit hour
    emucost = (credit_hours * EMU_CREDIT) + (credit_hours * EMU_BUSINESS_FEE)
            + (credit_hours * EMU_GENERAL) + (credit_hours * EMU_STUDENT_UNION)
            + (credit_hours * EMU_TECH);

    //Output the results for the schools tuition

    cout << endl;
    //Print out the total cost of WCC
    cout << "Tuition For Washtenaw " << endl;
    cout << "Tuition and fees for " << credit_hours
         << " cedit hour(s) at WCC total: $"<< wcc_cost << endl;
    cout << "The cost of driving " << wccdistance * ROUND_TRIP << " mile(s) "
         << "total: $" << mile_cost * (ROUND_TRIP * wccdistance ) << endl;
    cout << "The total cost for WCC: $" << wcc_cost +
           (mile_cost * (ROUND_TRIP * wccdistance)) << endl;
    cout << endl;

    //Print out the total cost of EMU
    cout << "Tuition For Eastern University " << endl;
    cout << "Tuition and fees for " << credit_hours
         << " credit hour(s) at EMU total: $" << emucost << endl;
    cout << "The cost for driving " << emudistance * ROUND_TRIP << " mile(s) "
         << "total: $" << mile_cost * (emudistance  * ROUND_TRIP ) << endl;
    cout << "The total cost for EMU: $" << emucost +
           (mile_cost * ( ROUND_TRIP * emudistance)) << endl;
    cout << endl;

    //Print the total cost of UM
    cout << "Tuition For Michigan University " << endl;
    cout << "Tuition and fees for " << credit_hours
         << " credit hour(s) at UM total: $" << umcost << endl;
    cout << "The cost for driving " << umdistance * ROUND_TRIP << " miles(s) "
         << "total: $" << mile_cost * ( ROUND_TRIP * umdistance ) << endl;
    cout << "The total cost for UM: $" << umcost +
             (mile_cost * ( ROUND_TRIP * umdistance)) << endl;
    cout << endl;

    cout << "Thank you for using Tuition Calculator by Brian Rundel " << endl;

    return 0;
}

/*
output: 1
Welcome to the Tuition Calculator by Brian Rundel.

Enter the number of credits: 3
Enter your cost per mile (example: 0.25 of 25 cents ): .20
Enter the distance to WCC: 3
Enter the distance to EMU: 6
Enter the distance to UM : 5

Tuition For Washtenaw
Tuition and fees for 3.00 cedit hour(s) at WCC total: $288.00
The cost of driving 360.00 mile(s) total: $72.00
The total cost for WCC: $360.00

Tuition For Eastern University
Tuition and fees for 3.00 credit hour(s) at EMU total: $1067.55
The cost for driving 720.00 mile(s) total: $144.00
The total cost for EMU: $1211.55

Tuition For Michigan University
Tuition and fees for 3.00 credit hour(s) at UM total: $1999.19
The cost for driving 600.00 miles(s) total: $120.00
The total cost for UM: $2119.19

Thank you for using Tuition Calculator by Brian Rundel
output : 2
Welcome to the Tuition Calculator by Brian Rundel.

Enter the number of credits: 15
Enter your cost per mile (example: 0.25 of 25 cents ): .30
Enter the distance to WCC: 6
Enter the distance to EMU: 11
Enter the distance to UM : 0

Tuition For Washtenaw
Tuition and fees for 15.00 cedit hour(s) at WCC total: $1440.00
The cost of driving 720.00 mile(s) total: $216.00
The total cost for WCC: $1656.00

Tuition For Eastern University
Tuition and fees for 15.00 credit hour(s) at EMU total: $5337.75
The cost for driving 1320.00 mile(s) total: $396.00
The total cost for EMU: $5733.75

Tuition For Michigan University
Tuition and fees for 15.00 credit hour(s) at UM total: $8167.19
The cost for driving 0.00 miles(s) total: $0.00
The total cost for UM: $8167.19

Thank you for using Tuition Calculator by Brian Rundel
output : 3
Welcome to the Tuition Calculator by Brian Rundel.

Enter the number of credits: 6
Enter your cost per mile (example: 0.25 of 25 cents ): .35
Enter the distance to WCC: 8
Enter the distance to EMU: 0
Enter the distance to UM : 9

Tuition For Washtenaw
Tuition and fees for 6.00 cedit hour(s) at WCC total: $576.00
The cost of driving 960.00 mile(s) total: $336.00
The total cost for WCC: $912.00

Tuition For Eastern University
Tuition and fees for 6.00 credit hour(s) at EMU total: $2135.10
The cost for driving 0.00 mile(s) total: $0.00
The total cost for EMU: $2135.10

Tuition For Michigan University
Tuition and fees for 6.00 credit hour(s) at UM total: $3541.19
The cost for driving 1080.00 miles(s) total: $378.00
The total cost for UM: $3919.19

Thank you for using Tuition Calculator by Brian Rundel

output :4
Note for cost of gas per mile I get 30 mpg so I did 4.09 <- cost for a gallon / 30 = .133336
Welcome to the Tuition Calculator by Brian Rundel.

Enter the number of credits: 11
Enter your cost per mile (example: 0.25 of 25 cents ): .13
Enter the distance to WCC: 31
Enter the distance to EMU: 33
Enter the distance to UM : 28

Tuition For Washtenaw
Tuition and fees for 11.00 cedit hour(s) at WCC total: $1056.00
The cost of driving 3720.00 mile(s) total: $483.60
The total cost for WCC: $1539.60

Tuition For Eastern University
Tuition and fees for 11.00 credit hour(s) at EMU total: $3914.35
The cost for driving 3960.00 mile(s) total: $514.80
The total cost for EMU: $4429.15

Tuition For Michigan University
Tuition and fees for 11.00 credit hour(s) at UM total: $6111.19
The cost for driving 3360.00 miles(s) total: $436.80
The total cost for UM: $6547.99

Thank you for using Tuition Calculator by Brian Rundel
*/
