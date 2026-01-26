#include <iostream>

using namespace std;

int main()
{
    int hpr, hw, grosspay, netpay;
    double tax;

    cout << "enter Hourly pay rate: ";
    cin >> hpr;
    cout << "enter hours worked: ";
    cin >> hw;
    cout << "enter tax with held: ";
    cin >> tax;

    // calculate the grosspay
    grosspay = hpr *  hw;

    // calculate the taxpercent
    tax = tax/100;

    // calculate netpay
    netpay = grosspay - (grosspay * tax);

    cout << "total grosspay is: " << grosspay << endl;
    cout << "the tax percentage is: " << tax << endl;
    cout << "the total netpay is: " << netpay << endl;

    return 0;
}
