#include <iostream>
using namespace std;

int main() {
 int target = 50;
 int num;
 char continueChoice;

 do {
   cout << "Guessing Game" << endl;
   cout << "Enter your guess number: ";
   cin >> num;

   if (num < target) {
     cout << "Higher Please" << endl;
   } else if (num > target) {
     cout << "Lower Please" << endl;
   } else {
     cout << "CORRECT!!!" << endl;
   }

   cout << "Do you want to continue(Y/N): ";
   cin >> continueChoice;
 } while (toupper(continueChoice) == 'Y');

 cout << "Thanks for using the system." << endl;

 return 0;
}