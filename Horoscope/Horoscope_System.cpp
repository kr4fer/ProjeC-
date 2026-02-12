#include <iostream>
#include <string>

using namespace std;

int main() {

  string zodiacSign;
  string month;
  int day;

  cout << "Enter your birth month (in lowercase): ";
  cin >> month;

  cout << "Enter your birth day: ";
  cin >> day;

  // Determine the zodiac sign based on the month and day
  if (month == "march") {
    if (month == "march" && (day >= 21 && day <= 31)) {
      zodiacSign = "Aries";
    } else {
      zodiacSign = "Pisces";
    }
  } else if (month == "april") {
    if (day >= 20) {
      zodiacSign = "Taurus";
    } else {
      zodiacSign = "Aries";
    }
  } else if (month == "may") {
    if (day >= 21) {
      zodiacSign = "Gemini";
    } else {
      zodiacSign = "Taurus";
    }
  } else if (month == "june") {
    if (day >= 21) {
      zodiacSign = "Cancer";
    } else {
      zodiacSign = "Gemini";
    }
  } else if (month == "july") {
    if (day >= 23) {
      zodiacSign = "Leo";
    } else {
      zodiacSign = "Cancer";
    }
  } else if (month == "august") {
    if (day >= 23) {
      zodiacSign = "Virgo";
    } else {
      zodiacSign = "Leo";
    }
  } else if (month == "september") {
    if (day >= 23) {
      zodiacSign = "Libra";
    } else {
      zodiacSign = "Virgo";
    }
  } else if (month == "october") {
    if (day >= 23) {
      zodiacSign = "Scorpio";
    } else {
      zodiacSign = "Libra";
    }
  } else if (month == "november") {
    if (day >= 22) {
      zodiacSign = "Sagittarius";
    } else {
      zodiacSign = "Scorpio";
    }
  } else if (month == "december") {
    if (day >= 22) {
      zodiacSign = "Capricorn";
    } else {
      zodiacSign = "Sagittarius";
    }
  } else if (month == "january") {
    if (day >= 20) {
      zodiacSign = "Aquarius";
    } else {
      zodiacSign = "Capricorn";
    }
  } else if (month == "february") {
    if (day >= 19) {
      zodiacSign = "Pisces";
    } else {
      zodiacSign = "Aquarius";
    }
  } else {
    cout << "Invalid month" << endl;
    return 0;
  }

  // Display the horoscope message
  cout << "Your zodiac sign is: " << zodiacSign << endl;

  return 0;
}
