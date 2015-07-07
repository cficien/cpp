//read and compare names
#include "std_lib_facilities.h"

int main()
{
    cout <<"Enter two names\n";
    string first;
    string second;
    cin >> first >> second;             // read the two strings
    if(first == second)
        cout <<"you have entered the same name twice\n";
    if(first < second)
        cout <<first <<" is alphabetically before " << second <<"\n";
    if(first > second)
        cout <<first <<" is alphabetically after " << second <<"\n";
}
