#include <iostream>
#include <string>

using namespace std;

void guessingGame() {
    int target = 50;
    int num;
    char continueChoice;

        do {
         cout << "Guessing Game" << endl;
         cout << "Enter your guess number: ";
         cin >> num;

   if (num < target) {
     cout << "Higher Please" << endl;
   } else if (num > target) {
     cout << "Lower Please" << endl;
   } else {
     cout << "CORRECT!!!" << endl;
   }

   cout << "Do you want to continue(Y/N): ";
   cin >> continueChoice;
 } while (toupper(continueChoice) == 'Y');

 cout << "Thanks for using the system." << endl;

}

void quizSystem() {
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

void horoscopeSystem() {
char continueChoice;

    do {
        string zodiacSign;
        string month;
        int day;

        cout << "\nHOROSCOPE\n";
        cout << "\nEnter your birth month (in lowercase): ";
        cin >> month;

        cout << "Enter your birth day: ";
        cin >> day;

        // Determine the zodiac sign based on the month and day
        if (month == "march") {
            zodiacSign = (day >= 21) ? "Aries" : "Pisces";
        } else if (month == "april") {
            zodiacSign = (day >= 20) ? "Taurus" : "Aries";
        } else if (month == "may") {
            zodiacSign = (day >= 21) ? "Gemini" : "Taurus";
        } else if (month == "june") {
            zodiacSign = (day >= 21) ? "Cancer" : "Gemini";
        } else if (month == "july") {
            zodiacSign = (day >= 23) ? "Leo" : "Cancer";
        } else if (month == "august") {
            zodiacSign = (day >= 23) ? "Virgo" : "Leo";
        } else if (month == "september") {
            zodiacSign = (day >= 23) ? "Libra" : "Virgo";
        } else if (month == "october") {
            zodiacSign = (day >= 23) ? "Scorpio" : "Libra";
        } else if (month == "november") {
            zodiacSign = (day >= 22) ? "Sagittarius" : "Scorpio";
        } else if (month == "december") {
            zodiacSign = (day >= 22) ? "Capricorn" : "Sagittarius";
        } else if (month == "january") {
            zodiacSign = (day >= 20) ? "Aquarius" : "Capricorn";
        } else if (month == "february") {
            zodiacSign = (day >= 19) ? "Pisces" : "Aquarius";
        } else {
            cout << "Invalid month" << endl;
        }

        cout << "Your zodiac sign is: " << zodiacSign << endl;
        
        // Ask if the user wants to continue
        cout << "Do you want to check another birthdate (Y/N)? ";
        cin >> continueChoice;

        cout << "Thank you for using the horoscope system!" << endl;

    } while (toupper(continueChoice) == 'Y');
}

int main() {
    int choice;
    char continueChoice;

    do {
        cout << "\nSystem Selection\n";
        cout << "1. Guessing Game\n";
        cout << "2. Quiz System\n";
        cout << "3. Horoscope System\n";
        cout << "Please choose system: ";
        cin >> choice;

        switch (choice) {
            case 1:
                guessingGame();
                break;
            case 2:
                quizSystem();
                break;
            case 3:
                horoscopeSystem();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "\nDo you want to choose another system (Y/N)? ";
        cin >> continueChoice;
    } while (toupper(continueChoice) == 'Y');

    cout << "\nThank you for using the system!" << endl;

    return 0;
}
