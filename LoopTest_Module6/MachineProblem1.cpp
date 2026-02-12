#include <iostream>

using namespace std;

int main() 
{
   int base, exponent, result = 1;

   cout << "\nFind power of any number using for loop:\n";
   cout << "---------------------------------------------\n";

   cout << "Input the base: ";
   cin >> base;

   cout << "Input the exponent: ";
   cin >> exponent;

   for (int i = 1; i <= exponent; i++) {
       result *= base;  
   }

   cout << base << " ^ " << exponent << " = " << result << endl;

   return 0;
}