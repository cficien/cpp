// find number of miles to kilometers
#include "std_lib_facilities.h"

int main() {
  cout << "Please enter the number of miles\n";
  double miles;
  cin >> miles;
  double km_distance = miles * 1.609;
  cout << "There are: " << km_distance << " miles in kilometers\n";
}
