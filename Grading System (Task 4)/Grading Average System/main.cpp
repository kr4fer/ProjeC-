#include <iostream>

using namespace std;

int main()
{
   double grade1, grade2, grade3;

   cout << "Enter Grade Value 1: ";
   cin >> grade1;
   cout <<"Enter Grade Value 2: ";
   cin >> grade2;
   cout<<"Enter Grade Value 3: ";
   cin >> grade3;

   double averageGrade = (grade1 + grade2 + grade3)/3;

   //cout<<endl<<endl<<endl;

   cout<< "Your total average for this sem is: " << averageGrade;

   return 0;
}
