// write a program to prompt the user for 3 integer value
// and output the value in numerical sequence.
#include "std_lib_facilities.h"

int main() {
  int var1 = 0;
  int var2 = 0;
  int var3 = 0;
  cout << "Please enter 3 integer values follow by space: ";
  cin >> var1 >> var2 >> var3;
  if (!cin)
    error("something went wrong with the read");
  cout << "values read : " << var1 << "," << var2 << "," << var3 << "\n";
}
