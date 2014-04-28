#ifndef LABS_H_INCLUDED
#define LABS_H_INCLUDED
#include <string>
using namespace std;

#endif // LABS_H_INCLUDED
class info
{
    public :
            void store_info(string,string,int);
            void get_info(string&,string&,int&);
            int get_age(int&);
            info();
    private:
            string first_name;
            string last_name;
            int age;
};


