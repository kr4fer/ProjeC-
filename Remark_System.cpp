#include <iostream>

using namespace std;

int main() {
  int grade;

  cout << "Enter grade: ";
  cin >> grade;

  if (grade >= 101) {
    cout << "Remark: Overflow" << endl;
  } else if (grade >= 95) {
    cout << "Remark: Excellent" << endl;
  } else if (grade >= 90) {
    cout << "Remark: Very Good" << endl;
  } else if (grade >= 85) {
    cout << "Remark: Good" << endl;
  } else if (grade >= 75) {
    cout << "Remark: Satisfactory" << endl;
  } else if (grade >= 70) {
    cout << "Remark: Needs Improvement" << endl;
  } else if (grade >= 1) {
    cout << "Remark: Failing" << endl;
  } else {
    cout << "Remark: Invalid input" << endl;
  }

  return 0;
}
