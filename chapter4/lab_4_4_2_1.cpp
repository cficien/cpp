// calculate and print a table of squares 0-99
#include "std_lib_facilities.h"

int main() {
  int i = 0; // start from zero

  while (i < 100) {
    cout << i << '\t' << sqrt(i) << "\n";
    ++i; // incement i by 1 on each iteration
  }
  return 0;
}
