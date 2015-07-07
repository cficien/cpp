//program to read name and age
#include "std_lib_facilities.h"
int main()
{
    cout <<"Please enter your first name and age('then enter')\n";
    string first_name;
    double age;
    int month = 0;
    int year = 0;
    cin >> first_name;
    cin >> age >> month >> year;
    cout <<"hello ," <<first_name <<"age" << age <<"\\" << month <<"\\"<< year * 12 <<"\n";
}
