#include <iostream>
using namespace std;

int main() {
  int target = 50;
  int num;

  start:
  cout << "Guessing Game" << endl;
  cout << "Enter your guess number: ";
  cin >> num;

  if (num < target) {
    cout << "Your guess is too low. Try again!" << endl;
    goto start;
  } else if (num > target) {
    cout << "Your guess is too high. Try again!" << endl;
    goto start;
  } else {
    cout << "Congratulations! You guessed the correct number!" << endl;
  }

  return 0;
}
