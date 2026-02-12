#include <iostream>

using namespace std;

int main()
{
  // Declare variables for student information
  string studentName, subjectName;

  // Declare variables for quiz scores
  int quizRawScore, quizTotalItems;
  double quizEquivalent, quizPercent, quizAnswer;

  // Declare variables for assignment scores
  int assignmentEquivalent;
  double assignmentPercent, assignmentAnswer;

  // Declare variables for exam scores
  int examRawScore, examTotalItems, examEquivalent;
  double examPercent, examAnswer;

  // Declare variables for final grade and remark
  double finalGrade;
  string remark;
  system("cls");

  // Display the program title
  cout << "\t\tNational High School Grading System" << endl << endl;

  // Get student name
  cout << "Enter Student Name: ";
  getline(cin, studentName);

  // Get subject name
  cout << "Enter Subject Name: ";
  getline(cin, subjectName);

  // Calculate quiz scores
  cout << "\t\t\t\tQUIZ" << endl << endl;
  cout << "Enter Raw Score: ";
  cin >> quizRawScore;

  do {
    cout << "Enter Total Items: ";
    cin >> quizTotalItems;
  } while (quizTotalItems <= 0);

  quizEquivalent = (double)quizRawScore / quizTotalItems * 100;

  cout << "Enter Quiz Percent: ";
  cin >> quizPercent;

  quizAnswer = quizEquivalent * quizPercent;

  // Calculate assignment scores
  cout << "\t\t\t\tASSIGNMENT" << endl << endl;
  cout << "Enter Assignment Equivalent: ";
  cin >> assignmentEquivalent;

  cout << "Enter Assignment Percent: ";
  cin >> assignmentPercent;

  assignmentAnswer = assignmentEquivalent * assignmentPercent;

  // Calculate exam scores
  cout << "\t\t\t\tEXAM" << endl << endl;
  cout << "Enter Raw Score: ";
  cin >> examRawScore;

  do {
    cout << "Enter Total Items: ";
    cin >> examTotalItems;
  } while (examTotalItems <= 0);

  examEquivalent = (double)examRawScore / examTotalItems * 100;

  cout << "Enter Exam Percent: ";
  cin >> examPercent;

  examAnswer = examEquivalent * examPercent;

  // Calculate final grade
  finalGrade = quizAnswer + assignmentAnswer + examAnswer;

  // Determine remark based on final grade
  if (finalGrade > 100) {
    remark = "Overflow!";
  } else if (finalGrade >= 95.0 && finalGrade <= 100.0) {
    remark = "Excellent!";
  } else if (finalGrade >= 90.0 && finalGrade <= 94.99) {
    remark = "Very Good!";
  } else if (finalGrade >= 85.0 && finalGrade <= 89.99) {
    remark = "Good!";
  } else if (finalGrade >= 80.0 && finalGrade <= 84.99) {
    remark = "Satisfactory!";
  } else if (finalGrade >= 75.0 && finalGrade <= 79.99) {
    remark = "Needs Improvement!";
  } else if (finalGrade >= 60.0 && finalGrade <= 74.99) {
    remark = "FAILED!";
  } else {
    remark = "Not a Valid Grade!!";
  }

  // Display student information, final grade, and remark
  cout << endl << "National High School Grading System" << endl;
  cout << "Student Name: " << studentName << endl;
  cout << "Subject: " << subjectName << endl;
  cout << "Final Grade: " << finalGrade << endl;
  cout << "Remark: " << remark << endl;

  return 0;
}
