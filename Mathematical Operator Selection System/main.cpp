#include <iostream>

using namespace std;

int main()
{
    char option;
    int val1, val2;
    double addition, subtraction, multiplication, division;

    // Display the operation where the user's wants to use
    cout << "\nThis  is Mathematical Operation Selection System!" << endl;
    cout << "Please what operation you're going to use: " << endl;
    cout << "a. Addition [+]" << endl;
    cout << "b. Subtraction [-]" << endl;
    cout << "c. Multiplication [*]" << endl;
    cout << "d. Division [/]" << endl;
    cout << "Enter your choice: ";
    cin >> option;
    system("cls");

    // Process the selected option
    switch (option) {
        case 'a': // Addition
            cout << "\nAddition:" << endl;
            cout << "Enter Value 1: ";
            cin >> val1;
            cout << "Enter Value 2: ";
            cin >> val2;
            addition = val1 + val2;
            cout << "The sum is: " << addition << endl;
            break;

        case 'b': // Subtraction
            cout << "\nSubtraction: " << endl;
            cout << "Enter Value 1: ";
            cin >> val1;
            cout << "Enter Value 2: ";
            cin >> val2;
            subtraction = val1 - val2;
            cout << "The difference is: " << subtraction << endl;
            break;

        case 'c': // Multiplication
            cout << "\nMultiplication: " << endl;
            cout << "Enter Value 1: ";
            cin >> val1;
            cout << "Enter Value 2: ";
            cin >> val2;
            multiplication = val1 * val2;
            cout << "The product is: " << multiplication << endl;
            break;

        case 'd': // Divission
            cout << "\nDivision: " << endl;
            cout << "Enter Value 1: ";
            cin >> val1;
            cout << "Enter Value 2: ";
            cin >> val2;
            if (val2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            division = val1 / double(val2);
            cout << "The quotient is: " << division << endl;
            break;

        default:
            cout << "Invalid Value. Please try again." << endl;
            return 1;
    }

    // Ask if the user wants to calculate again
    cout << "\nWould you like to try again? (y/n): ";
    cin >> option;
    while (option == 'y' || option == 'Y') {
        system("cls");
        main();
        cout << "\nWould you like to try again? (y/n): ";
        cin >> option;
    }

    cout << "\nThank you for using the Op!" << endl;

    return 0;
}