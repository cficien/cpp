// library
#include "std_lib_facilities.h"
int main() {
  // case labels must be constants
  int y = 'y'; // this is going to cause trouble
  constexpr char n = 'n';
  constexpr char m = '?';

  cout << "Do you like fish?\n";
  char a;
  cin >> a;
  switch (a) { // Error: the value must be of integer, char or enum type
  case "n":
    cout << "you don't like fish\n";
    break;
  case "y":
    cout << "you like fish\n";
    break;
  case "m":
    //... code here
    break;
  case "n":
    // code goes here
    break;
  default:
    // code here
    break;
  }
  return 0;
}
