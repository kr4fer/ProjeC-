#include <iostream>

using namespace std;

void function1() {
  cout << "You chose function 1." << endl;
}

void function2() {
  cout << "You chose function 2." << endl;
}

void function3() {
  cout << "You chose function 3." << endl;
}

void function4() {
  cout << "You chose function 4." << endl;
}

void function5() {
  cout << "You chose function 5." << endl;
}

int main() {
  int choice;

  cout << "Enter your choice (1-5): ";
  cin >> choice;

  switch (choice) {
    case 1:
      function1();
      break;
    case 2:
      function2();
      break;
    case 3:
      function3();
      break;
    case 4:
      function4();
      break;
    case 5:
      function5();
      break;
    default:
      cout << "Invalid choice." << endl;
      break;
  }

  return 0;
}
