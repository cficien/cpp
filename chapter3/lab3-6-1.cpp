//read repeat numbers
#include "std_lib_facilities.h"

int main()
{
    int number_of_word = 0;
    string previous ="";
    string current;
    while(cin>> current)
    {
        ++number_of_word;
    if(previous == current)
        cout <<"number of words: " << number_of_word <<" repeated: "<<current <<"\n";
    previous = current;
    }
}
