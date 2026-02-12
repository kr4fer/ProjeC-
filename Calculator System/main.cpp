#include <iostream>

using namespace std;

int main()
{
    int val1, val2, sum, difference, product, quotient;

    cout << "enter value 1: ";
    cin >> val1;
    cout << "enter value 2: ";
    cin >> val2;

    // calculate the sum of two values
    sum = val1 + val2;

    // calculate the difference of two values
    difference = val1 - val2;

    // calculate the product of two values
    product = val1 * val2;

    // calculate the quotient of two values
    quotient = val1/val2;

    cout << "the sum of two values is: " << sum << endl;
    cout << "the difference of two values is: " << difference << endl;
    cout << "the product of two values is: " << product << endl;
    cout << "the qoutient of two values is: " << quotient << endl;

    return 0;
}
