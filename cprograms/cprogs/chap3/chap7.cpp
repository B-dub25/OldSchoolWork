 /*
 Author Brian Rundel
 This program will count how many, zerros, evens and odds in a set of numbers
 */

 #include <iostream>


 const int N = 20;

 using namespace std;

 int main()
 {
     int number;
     initialize(even, odd, zerro);
     for (int i = 1; i <= N; i++ )
     {
         getnumber(number);
         classify(evens, odds, zerros);
     }
    printresalts(evens, odds, zerros);
 return 0;

 }

 void initialize(int& even, int& odd, int& zerro )
 {
     int evens = 0;
     int odds = 0;
     int zerros = 0;
     cout << "Enter " << N << " numbers ";

 }

 void getnumber(int& number)
 {

     cin >> number;
 }

void classify(int number, int& evens, int& odds, int& zerros)
{
     switch(number % 2)
     {
         case 0:
         evens++;
            if (number == 0)
              zerros++;
         break;
         case 1:
         case -1;
         odds++;
         break;
         default:
         cout << "Invailid input ";
         break;

     }
 }
void printresalts(int evens, int odds, int zerros)
{
    cout << "There are " << evens << " evens and " << odds
           << " odds and " << zerros << " zerros " << endl;
}
