#include "std_lib_facilities.h"

int main()
{
   int a = 0;
   int b = 0;
   cout <<"Please enter two integer\n";
   cin >>a >>b;

   if(a<b)              // condition
                        // first alternative (taken if condition is true)
        cout <<"max(" <<a <<"," <<b <<") is" << b <<"\n";

    else
        // second alternation (taken if condition is false
        cout <<"max(" <<a <<"," <<b <<") is "<< a <<"\n";

    return 0;
}
