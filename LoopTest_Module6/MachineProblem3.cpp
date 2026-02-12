#include <iostream>

using namespace std;

int main() {
  int number, first, last, sum;

  cout << "\nFind the sum of first and last digit of a number\n";

  cout << "Input any number: ";
  cin >> number;

  last = number % 10;  // Extract last digit using modulo operator

  for (first = number; first >= 10; first /= 10);  // Loop to find first digit

  sum = first + last;  // Calculate the sum

  cout << "The first digit of " << number << " is: " << first << endl;
  cout << "The last digit of " << number << " is: " << last << endl;
  cout << "The sum of first and last digit of " << number << " is: " << sum << endl;

  return 0;
}