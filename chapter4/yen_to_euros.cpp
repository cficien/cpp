//convertion yen to euros
#include "std_lib_facilities.h"

int main()
{
    constexpr double euros = 0.0072;
    double yen = 1;
    char unit ='0';

    cout <<"enter the amount of yen or euros(y or e) to convert: \n";
    cin >> yen >>unit;

    // test unit for yen
    if(unit == 'y')
    {
        cout <<yen <<" yen == " <<euros * yen <<" eu\n";
    }
    else if(unit == 'e')
    {
        cout << yen <<" eu == " << yen / euros <<" yen\n";
    }
    else
    {
        cout <<"Sorry, wrong unit value :" << unit <<"\n";
    }

    return 0;
}
