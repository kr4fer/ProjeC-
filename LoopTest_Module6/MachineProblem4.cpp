#include <iostream>

using namespace std;

int main() {
    int i, j, r;

    cout << "\n\n Display the pattern like a diamond\n\n";
    cout << " Enter number of rows : ";
    cin >> r;
    
    for (i = 0; i <= r; i++) {
        for (j = 1; j <= r - i; j++) {
            cout << " ";  // Print spaces
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*";  // Print asterisks
        }
        cout << endl; 
    }

    // Print the lower half of the diamond pattern
    for (i = r - 1; i >= 1; i--) {
        for (j = 1; j <= r - i; j++) {
            cout << " ";  // Printspaces
        }
        for (j = 1; j <= 2 * i - 1; j++) { 
            cout << "*";  // Print asterisks
        }
        cout << endl;  
    }

    return 0;
}