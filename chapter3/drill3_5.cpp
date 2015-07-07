// prompt the user for the age of the recipient
#include "std_lib_facilities.h"

int main()
{
  cout <<"Enter the age of the recipient\n";
  int age;
  cin >> age;
  cout <<"I hear you just had a birthday and you are " << age << "\tyear old\n";
  if(age <= 0)
  {
    cout <<"you are kidding!\n";
  }
}
