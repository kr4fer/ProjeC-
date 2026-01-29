#include <iostream>
#include <string>

using namespace std;

int main() {
  string username, password;

  do {
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    if (username == "Admin" && password == "Admin123") {
      cout << "ACCESS GRANTED!!!" << endl;
      cout << "Good day Admin" << endl;
      break;
    } else if (username == "Guest" && password == "Guest123") {
      cout << "ACCESS GRANTED!!!" << endl;
      cout << "Good day Guest" << endl;
      break;
    } else if (username == "Secretary" && password == "Sec123") {
      cout << "ACCESS GRANTED!!!" << endl;
      cout << "Good day Secretary" << endl;
      break;
    } else {
      cout << "ACCESS DENIED, try again..." << endl;
    }
  } while(true); // Repeat the loop until credentials are correct

  return 0;
}
