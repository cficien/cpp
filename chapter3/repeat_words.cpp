//repeat words in sequence of words
#include "std_lib_facilities.h"
int main()
{
    string previous ="";                    // previous word; initialize to nothing
    string current;                         // current words
    while(cin >> current)                   // read a stream of words
    {
        if(previous == current)             // check if the word is the same as the last
            cout <<"repeated word: " << current <<"\n";
        previous = current;

    }
}
