// prompt the user for the age of the recipient
#include "std_lib_facilities.h"

int main() {
  cout << "Enter the age of the recipient\n";
  int age;
  cin >> age;
  cout << "I hear you just had a birthday and you are " << age
       << "\tyear old\n";
  if (age <= 12) {
    ++age;
    cout << "Next year you will be " << age << "\n";
  } else if (age == 17) {
    cout << "Next year you will be able to vote\n";
  } else if (age >= 70) {
    cout << "I hope you are enjoying retirement\n";
  }
  cout << "'Yours Sincerely'"
       << "\n"
       << "\n"
       << "John Adams\n";
}
