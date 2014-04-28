/*
Author: Brian Rundel
CPS 171 Lab 10 ( I think )
string functions ( without using erase )

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string phrase,word;
    int possion = 0;
    int count = 0;
    int error_check;

    cout << "Enter a sentence ";
    getline(cin,phrase);
    cout << "Enter a word to find ";
    cin >> word;

    error_check = phrase.find(word);
    if(error_check == -1)
       {
       cout << "Word not in the phrase " << phrase << endl;
        return error_check;
       }

    while(phrase.length() > possion)
    {
        if(phrase.substr(possion,word.size()) == word)
           count++;
       possion++;
    }
    cout << "The word \"" << word  << "\" "
         << " was found " <<  count << " time(s)\n";

    return 0;
}
/*
Enter a sentence abcabcdddacb
Enter a word to find abc
The word "abc" was found 2 time(s)

Enter a sentence goandgofindthiswordgo
Enter a word to find go
The word "go" was found 3 time(s)

Enter a sentence thissuckedphilnotbeingabletouseerase
Enter a word to find phil
The word "phil"  was found 1 time(s)


*/
