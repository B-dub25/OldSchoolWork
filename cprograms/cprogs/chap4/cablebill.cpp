//*****************************************************
//
// Author: Brian Rundel
// This will caculate the cable bill for a customer of
// residential or bussiness type. And it will ask for
// accout number.
//
//*****************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const double resident_process = 4.50;
const double resident_service = 20.50;
const double resident_premium = 7.50;

const double bussiness_process = 15.00;
const double bussiness_service = 75.00;                     // For the first ten;
const double bussiness_service_after_ten = 5.00;
const double bussiness_premium = 50.00;

int main()
{

    int service_number;
    int account_number;
    int number_premium;
    double total_bill,add_service;
    char service_type;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter account number. ";
    cin >> account_number;
    cout << "Enter service type 'R' or 'r' for residential"
          << " 'b' or 'B' for bussiness. ";
    cin >> service_type;

    switch(service_type)
    {
        case 'r':
        cout << "Enter number of premium channels. ";
        cin >> number_premium;
        total_bill = number_premium * resident_premium + resident_service
                     + resident_process;
        cout << "The bill for the residential account number "
              << account_number << " is " << total_bill << endl;
             break;
        case 'R':
        cout << "Enter number of premium channels. ";
        cin >> number_premium;
        total_bill = number_premium * resident_premium + resident_service
                     + resident_process;
        cout << "The bill for the residential account number "
              << account_number << " is " << total_bill << endl;
             break;
        case 'b':
        cout << "Enter number of services the account has. ";
        cin >> service_number;
        cout << "enter the number of premium services. ";
        cin >> number_premium;
        number_premium *= bussiness_premium;
        if ( service_number > 10 )
        {
         add_service = (service_number - 10 ) * bussiness_service_after_ten;
         total_bill = bussiness_process + bussiness_service
                      + add_service + number_premium;
         cout << "The total bill for the bussiness account number "
               << account_number << " is " << total_bill << endl;

        }
        else if (service_number < 10 )
        {
           total_bill = bussiness_process + bussiness_service + number_premium;
         cout << "The total bill for the bussiness account number "
               << account_number << " is " << total_bill << endl;
        }
        break;
        case 'B':
        cout << "Enter the number of premium services on "
              << "the account. ";
        cin >> number_premium;
        number_premium *= bussiness_premium;
        cout << "Enter number of services the account has. ";
        cin >> service_number;
         if ( service_number > 10 )
        {
         add_service = (service_number - 10 ) * bussiness_service_after_ten;
         total_bill = bussiness_process + bussiness_service
                      + add_service + number_premium;
         cout << "The total bill for the bussiness account number "
               << account_number << " is " << total_bill << endl;

        }
        else if (service_number < 10 )
        {
           total_bill = bussiness_process + bussiness_service + bussiness_premium;
         cout << "The total bill for the bussiness account number "
               << account_number << " is " << total_bill << endl;
    }
    break;
    default:

    cout << "Invalid entery " << endl;
    }
    return 0;
}
