// write a program that convert string into numbers
#include "std_lib_facilities.h"

int main() {
  cout << "Enter a number as 'one or two'\n";
  int var1 = 0;

  while (cin >> var1) {
    int n = var1;
    char x = n;

    cout << "var1 == " << var1 << "n == " << n << "x == " << x << "char(" << x
         << ")\n";
  }
}
