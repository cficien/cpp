//read repeat numbers
#include "std_lib_facilities.h"

int main()
{
    string previous ="";
    string current;
    while(cin>> current)
    {
    if(previous == current)
        cout <<"Dude! this is a repeat word: " << current <<"\n";
    previous = current;
    }
}
