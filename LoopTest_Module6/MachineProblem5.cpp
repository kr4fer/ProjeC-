#include <iostream>
#include <string>

using namespace std;

string numberToWords(int digit) {
   string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
   return words[digit];
}

int main() {
   int num, reversedNum = 0, digit;
   
   cout << "\nPrint a number in words\n\n";
   cout << "Enter any number: ";
   cin >> num;

   for (int i = num; i > 0; i /= 10) {
       digit = i % 10;
       reversedNum = reversedNum * 10 + digit;
   }
   // Print the reversed number in words using a for loop
   for (int i = reversedNum; i > 0; i /= 10) {
       digit = i % 10;
       cout << numberToWords(digit) << " ";
   }

   cout << endl;

   return 0;
}