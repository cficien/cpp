// calculate and print a table of squares 0-99
#include "std_lib_facilities.h"

int main() {
  char b = 'a' + 1;
  char c = 'a' + 2;
  while (b < 100) {
    cout << b << '\t' << sqrt(b) << "\n";
    ++b; // incement i by 1 on each iteration
  }
  return 0;
}
