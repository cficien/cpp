// library
#include "std_lib_facilities.h"
int main() {
  // you can switch only on integers. etc
  cout << "Do you like fish?\n";
  string s;
  cin >> s;
  switch (s) { // Error: the value must be of integer, char or enum type
  case "no":
    cout << "you don't like fish\n";
    break;
  case "yes":
    cout << "you like fish\n";
    break;
  }
  return 0;
}
