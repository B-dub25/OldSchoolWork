#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word,find;
    int count = 0;

    cout << "Enter a sentence"<< endl;

    getline(cin,word);
    cin >> find;
    int i = word.find(find,0);
    cout << i;
return 0;
}
