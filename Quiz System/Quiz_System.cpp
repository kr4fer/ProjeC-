#include <iostream>

using namespace std;

int main() {
    int score = 0;

    //Science Quiz System
    // Question 1
    cout << "Question 1: Which scientific method step involves forming a hypothesis?" << endl;
    cout << "a. Observation" << endl;
    cout << "b. Experimentation" << endl;
    cout << "c. Hypothesis formulation" << endl;
    cout << "d. Data analysis" << endl;
    cout << "Your answer: ";

    char answer;
    cin >> answer;

    switch (answer) {
        case 'c':
            cout << "C is Correct" << endl;
            score++;
            break;
        default:
            cout << "Incorrect" << endl;
            break;
    }

    cout << "Score: " << score << endl;

    // Question 2
    cout << "\nQuestion 2: What is the scientific term for the process by which organisms adapt to their environment?" << endl;
    cout << "a. Evolution" << endl;
    cout << "b. Natural selection" << endl;
    cout << "c. Adaptation" << endl;
    cout << "d. All of the above" << endl;
    cout << "Your answer: ";

    cin >> answer;

    switch (answer) {
        case 'd':
            cout << "D is Correct" << endl;
            score++;
            break;
        default:
            cout << "Incorrect" << endl;
            break;
    }

    cout << "Score: " << score << endl;

    // Question 3
    cout << "\nQuestion 3: What is the smallest unit of matter that can exist independently?" << endl;
    cout << "a. Molecule" << endl;
    cout << "b. Atom" << endl;
    cout << "c. Element" << endl;
    cout << "d. Compound" << endl;
    cout << "Your answer: ";

    cin >> answer;

    switch (answer) {
        case 'b':
            cout << "B is Correct" << endl;
            score++;
            break;
        default:
            cout << "Incorrect" << endl;
            break;
    }

    cout << "Score: " << score << endl;

    // Question 4
    cout << "\nQuestion 4: What is the force that attracts objects towards each other?" << endl;
    cout << "a. Gravity" << endl;
    cout << "b. Electromagnetism" << endl;
    cout << "c. The strong nuclear force" << endl;
    cout << "d. The weak nuclear force" << endl;
    cout << "Your answer: ";

    cin >> answer;

    switch (answer) {
        case 'a':
            cout << "A is Correct" << endl;
            score++;
            break;
        default:
            cout << "Incorrect" << endl;
            break;
    }

    cout << "Score: " << score << endl;

    // Question 5
    cout << "\nQuestion 5: What is the process by which plants convert sunlight into energy?" << endl;
    cout << "a. Cellular respiration" << endl;
    cout << "b. Photosynthesis" << endl;
    cout << "c. Mitosis" << endl;
    cout << "d. Meiosis" << endl;
    cout << "Your answer: ";

    cin >> answer;

    switch (answer) {
        case 'b':
            cout << "B is Correct" << endl;
            score++;
            break;
        default:
            cout << "Incorrect" << endl;
            break;
    }

    cout << "Score: " << score << endl;

    return 0;
}