// convertion dollar to pound and pound to dollar
#include "std_lib_facilities.h"

int main()
{
    constexpr double pound = 0.64;
    double dollar = 1;
    char unit ='0';

    cout <<"enter the amount of pound or dollar(p or d) to convert: \n";
    cin >> dollar >>unit;

    // test unit for yen
    if(unit == 'd')
    {
        cout <<dollar <<" dollar == " << pound * dollar <<" pounds\n";
    }
    else if(unit == 'p')
    {
        cout << dollar <<" pound == " << dollar / pound <<" dollars\n";
    }
    else
    {
        cout <<"Sorry, wrong unit value :" << unit <<"\n";
    }

    return 0;
}
