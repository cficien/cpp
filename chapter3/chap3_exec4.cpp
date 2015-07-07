// write a program to prompt the user for two integer value
#include "std_lib_facilities.h"

int main() {
  cout << "Enter two integers value\n";
  // local variable declaration
  int var1 = 0;
  int var2 = 0;
  // read the input from the keyboard
  cin >> var1 >> var2;
  // display the 2 integer entered
  cout << "you have entered: " << var1 << " and " << var2 << "\n";
  // test for negative value
  if (var1 <= 0) {
    cout <<"The value of the integer is negative\n";
  }
  else {
    cout <<"the value is positive\n";
  }
  if (var1 < var2) {
    cout << var1 << " is smaller\n";
  } else {
    cout << var1 << " is larger\n";
  }
  cout << "The sum is: " << var1 + var2 << "\n";
  cout << "difference of (var1-var2): " << var1 - var2 << "\n";
  cout << "Product of (var1*var2): " << var1 *var2 << "\n";
  // test for the ratio of the operation
  if (var2 == 0) {
    cout << "Good try. I don't devide by zero\n";
  } else {
    cout << "The ratio of (var1/var2): " << var1 / var2 << "\n";
  }
}
