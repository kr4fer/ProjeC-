#include <iostream>

using namespace std;

int main() {
  string location;
  string fullname;
  int math1, math2;
  char chatChoice;

  loop:

    // Clear the screen after each choice
    system("cls");

    cout << "1. Location" << endl;
    cout << "2. Fullname" << endl;
    cout << "3. Math" << endl;
    cout << "Please Choose: ";

    int choice;
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "a. Bacolod" << endl;
        cout << "b. Silay" << endl;
        cout << "Please Choose: ";

        char locationChoice;
        cin >> locationChoice;

        if (locationChoice == 'a') {
          location = "Bacolod";
          cout << "City of Smile" << endl;
        } else if (locationChoice == 'b') {
          location = "Silay";
          cout << "City of Silay" << endl;
        } else {
          cout << "Invalid location choice" << endl;
        }

        break;

      case 2:
        cout << "Enter Fullname: ";
        cin.ignore();
        getline(cin, fullname);
        cout << fullname << endl;
        break;

      case 3:
        cout << "Enter 1st #: ";
        cin >> math1;
        cout << "Enter 2nd #: ";
        cin >> math2;
        cout << math1 << " + " << math2 << " = " << math1 + math2 << endl;
        break;

      default:
        cout << "Invalid choice" << endl;
        break;
    }

    // Ask if the user wants to chat again
    cout << "Do you want to chat again? (Y/N) ";
    cin >> chatChoice;

    if (chatChoice == 'Y' || chatChoice == 'y') {
      goto loop;
    } else {
      cout << "Thank you for chatting with me!" << endl;
      return 0;
    }
}
