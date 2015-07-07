// unsafe conversions
#include "std_lib_facilities.h"

int main() {
  double d = 0;

  cout << "Enter a few integer and enter a few float number\n";
  while (cin >> d) {               // repeat the statement bellow
                                   // as long as we type in numbers
    int i = d;                     // try to sqeeze a double into an int
    char c = i;                    // try to sqeeze an int into a char
    int i2 = c;                    // get the int value of the character
    cout << " d == " << d          // the original double
         << "i ==" << i            // convert to an integer
         << "i2 ==" << i2          // int value of char
         << "char(" << c << ")\n"; // the char
  }
}
