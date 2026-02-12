#include <iostream>

using namespace std;

int main() {
 int score = 0;
 char continueChoice,getCorrectAnswer(int questionNumber);
 int questionNumber = 1;

 do {
   // Questions
   switch (questionNumber) {
     case 1:
       cout << "\nQuestion 1: Which scientific method step involves forming a hypothesis?" << endl;
       cout << "a. Observation" << endl;
       cout << "b. Experimentation" << endl;
       cout << "c. Hypothesis formulation" << endl;
       cout << "d. Data analysis" << endl;
       break;
     case 2:
       cout << "\nQuestion 2: What is the scientific term for the process by which organisms adapt to their environment?" << endl;
       cout << "a. Evolution" << endl;
       cout << "b. Natural selection" << endl;
       cout << "c. Adaptation" << endl;
       cout << "d. All of the above" << endl;
       break;
     case 3:
       cout << "\nQuestion 3: What is the smallest unit of matter that can exist independently?" << endl;
       cout << "a. Molecule" << endl;
       cout << "b. Atom" << endl;
       cout << "c. Element" << endl;
       cout << "d. Compound" << endl;
       break;
     case 4:
       cout << "\nQuestion 4: What is the force that attracts objects towards each other?" << endl;
       cout << "a. Gravity" << endl;
       cout << "b. Electromagnetism" << endl;
       cout << "c. The strong nuclear force" << endl;
       cout << "d. The weak nuclear force" << endl;
       break;
     case 5:
       cout << "\nQuestion 5: What is the process by which plants convert sunlight into energy?" << endl;
       cout << "a. Cellular respiration" << endl;
       cout << "b. Photosynthesis" << endl;
       cout << "c. Mitosis" << endl;
       cout << "d. Meiosis" << endl;
       break;
   }

   cout <<"\nYour answer: ";

   char answer;
   cin >> answer;

   // Check the answer and provide feedback
   if (tolower(answer) == getCorrectAnswer(questionNumber)) {
     cout << "Correct!" << endl;
     score++;
   } else {
     cout << "Incorrect" << endl;
   }

   cout << "Score: " << score << endl;

   // Ask if the user wants to continue
   cout << "Do you want to proceed to the next question(Y/N): ";
   cin >> continueChoice;

   questionNumber++;
 } while (toupper(continueChoice) == 'Y' && questionNumber <= 5);

 cout << "Thanks for taking the quiz!" << endl;
 cout << "Your final score is: " << score << endl;

 return 0;
}

char getCorrectAnswer(int questionNumber) {
 switch (questionNumber) {
   case 1:
     return 'c';
   case 2:
     return 'd';
   case 3:
     return 'b';
   case 4:
     return 'a';
   case 5:
     return 'b';
   default:
     return 'x';  // Invalid question number
 }
}