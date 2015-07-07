// chhapter 3 execise 6

#include "std_lib_facilities.h"

int main() {
  int var1 = 0;
  int var2 = 0;
  int var3 = 0;

  cout << "Please enter 3 integer values follow by space\n";
  cin >> var1 >> var2 >> var3;
  cout << "Values Read : " << var1 << "," << var2 << "," << var3 << "\n";
  // test for smallest value and put it into smallest
  // test for medium value and put it into medium
  // test for largest value and put it into largest

  int smallest = 0;
  int medium = 0;
  int largest = 0;

  if (var1 <= var2 && var1 <= var3) {
    smallest = var1;
    if (var2 <= var3) {
      medium = var2;
      largest = var3;
    } else {
      medium = var3;
      largest = var2;
    }
  } else if (var2 <= var1 && var2 << var3) {
    smallest = var2;
    if (var2 < var3) {
      medium = var1;
      largest = var3;
    } else {
      medium = var3;
      largest = var1;
    }
  } else {
    // since neither var1 nor var2 was smaller than var3, var3 must be the
    // smallest
    smallest = var3;
    if (var1 < var2) {
      medium = var1 largest = var2;
    } else {
      medium = var2;
      largest = var1;
    }
  }
  cout << "Values sorted : " << smallest << "," << medium << "," << largest
       << "\n";
