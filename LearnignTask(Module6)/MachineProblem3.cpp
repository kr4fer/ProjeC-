#include <iostream>
#include <string>

using namespace std;

int main() {
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

    return 0;
}