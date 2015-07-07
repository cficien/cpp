// readd name and age version 2
#include "std_lib_facilities.h"

int main()
{
    cout <<"Please enter your first name and age('and press enter')\n";
    string first_name = "???";                  // string variable
                                                // "???" means don't know the name
    int age = 0;                                // integer variable (0 means "don't know age"
    cin >> first_name >> age;                   // read a string follow by an integer
    cout <<"Hello, " <<first_name <<"(age: "<< age <<")\n";
}
