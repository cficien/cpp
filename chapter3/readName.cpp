//read first and second name
#include "std_lib_facilities.h"
int main()
{
    cout <<"Please enter your first and second name\n";
    string first_name;
    string last_name;
    cin >> first_name >> last_name;
    string name = first_name+ " " +last_name;    //concatenate string
    cout <<"Hello, " << name <<"\n";
}
