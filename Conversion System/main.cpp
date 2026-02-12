#include <iostream>

using namespace std;

int main()
{
    int CValue, ECF;
    double conversion;

    cout << "enter celsius value: ";
    cin >> CValue;

    // converting the celsius to faranheit
    conversion = (CValue * 1.8) + 32;

    cout << "The equivalent of celsius to faranheit is: " << conversion << endl;
    return 0;
}
