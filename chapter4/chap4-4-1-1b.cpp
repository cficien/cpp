// convert from inches to centimeters or centimeters to inches
// a suffix 'i' or 'c' indicates the unit of the input
// any other suffix is an error. 1 inch = 2.54 cm and 1 centimetr = 0.3937
#include "std_lib_facilities.h"

int main()
{
    constexpr double cm_per_inch = 2.54;        // 1 inch = 2.54 centimeter
    double length = 1;
    char unit = '0';

    cout <<"Enter a length followed by a unit (c or i): \n";
    cin >> length >> unit;

    // test for unit in inches
    if(unit == 'i')
    {
        cout <<length <<"in == " << cm_per_inch * length <<"cm\n";
    }
    else if(unit =='c')         // test for unit in centimeter
    {
        cout <<length <<"cm == " <<length / cm_per_inch <<"in\n";
    }
    else
    {
        cout <<"Sorry, I don't know a unit called: " <<unit <<"\n";
    }

        return 0;
}
