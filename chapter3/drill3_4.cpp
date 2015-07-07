// prompt the user for friend name and sex
#include "std_lib_facilities.h"

int main() {
  cout << "Enter your friend name and sex\n";
  string friend_name;
  char friend_sex = 0;
  cin >> friend_name >> friend_sex;
  if (friend_sex == 'M') { // check to see if friend a male
    cout << "if you see " << friend_name << " please him to call me\n";
  } else if (friend_sex == 'F') { // check to see if friend a female
    cout << "if you see " << friend_name << " Please ask her to call me\n";
  }
}
