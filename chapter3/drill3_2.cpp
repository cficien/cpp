// prompt the user for it name
#include "std_lib_facilities.h"

int main() {
  cout << "Enter your first name\n";
  string first_name = "";
  cin >> first_name;
  cout << "How are you? " << first_name << "\nI am fine."
       << "\nI miss you."
       << "\n";
}
