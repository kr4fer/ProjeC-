#include <iostream>

using namespace std;

int main()
{
    int pre, midt, endt;
    double ave;

    cout << "enter prelim grade: ";
    cin >> pre;
    cout << "enter midterm grade: ";
    cin >> midt;
    cout << "enter endterm grade: ";
    cin >> endt;

    // calculate the final average
    ave = (pre * .30) + (midt * .30) + (endt * .40);

    cout << "Your Garde Average for this Semester is: " << ave << endl;

    return 0;
}
