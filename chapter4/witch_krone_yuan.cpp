// currency convertion
#include "std_lib_facilities.h"

int main() {
  constexpr double krone_per_yuan = 0.16; // number of krone in  yuan

  double krone = 1;

  char unit = 'a';
  // enter k for krone y for chinese yuan
  cout << "Please enter a number of krone followed by a unit (k or y) :\n";
  cin >> krone >> unit;
  switch (unit) {
  case 'k':
    cout << krone << "krone == " << krone_per_yuan *krone << "krone\n";
    break;
  case 'y':
    cout << krone << "yuan == " << krone / krone_per_yuan << "yuan\n";
    break;
  default:
    cout << "Sorry, I don't know the unit called " << unit << "\n";
  }
}
