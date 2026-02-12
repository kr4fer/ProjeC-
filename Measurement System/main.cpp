#include <iostream>

using namespace std;

int main()
{
  double Circumference;
  int RC, Diameter;

  cout << "enter the radius of circle: ";
  cin >> RC;

  // Calculate the diameter
  Diameter = RC * 2;

  // Calculate the Circumference
  Circumference = Diameter * 3.14;

  cout << "the equivalent of diameter is: " << Diameter << endl;
  cout << "the equivalent of circumference to the diamete is: " << Circumference << endl;

  return 0;
}

