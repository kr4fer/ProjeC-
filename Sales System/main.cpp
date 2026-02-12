#include <iostream>

using namespace std;

int main()
{
  string ni;
  int tp, qt, total, change, payment;
  double dc;

  cout << "enter item name: ";
  cin >> ni;
  cout << "enter price: ";
  cin >> tp;
  cout << "enter the number of item: ";
  cin >> qt;
  cout << "enter Discount: ";
  cin >> dc;
  cout << "enter cash on hand: ";
  cin >> payment;


  // Calculate the discount
  dc = tp * qt * dc / 100;

  // Calculate the total bill
  total = tp * qt - dc;

  // Check if the user has entered enough money to pay for the bill
  if (payment < total) {
    cout << "You do not have enough money to pay for the bill." << endl;
    return 1;
  }

  // Calculate the change
  change = payment - total;

  cout << "the total bill is: " << total << endl;
  cout << "Your change is: " << change << endl;

  return 0;
}
