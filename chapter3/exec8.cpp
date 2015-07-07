// write a program to test integer values for odd or even
#include "std_lib_facilities.h"

int main() {
  cout << "Please enter an integer follow by enter\n";
  int number = 0;
  cin >> number;

  if (number % 2 == 0) {
    cout << "Number read : " << number << " is an Even number\n";
  } else {
    cout << "Number read : " << number << " is an odd number\n";
  }
}
