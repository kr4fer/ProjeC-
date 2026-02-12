#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;

  cout << "\nDisplay n terms of even natural number and their sum\n\n";

  cout << "Input number of terms: ";
  cin >> n;

  cout << "\nThe even numbers are: ";

  for (int i = 2; i <= 2 * n; i += 2) {
    // Loop iterates from 2 to 2n with increment 2, ensuring all even numbers are covered
    cout << i << " ";
    sum += i; // Add each even number to the sum
  }

  cout << "\nThe Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;

  return 0;
}