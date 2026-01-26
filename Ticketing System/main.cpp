#include <iostream>

using namespace std;

int main()
{
  string movie_name;
  double ATP, CTP, GrossAmnt, AmntDonated, netsale, PGross_Charity;
  int NumAdult_TS, NumChild_TS;

  cout << "enter Movie Name: ";
  cin >> movie_name;
  cout << "enter adult ticket price: ";
  cin >> ATP;
  cout << "enter child ticket price: ";
  cin >> CTP;
  cout << "Number of adult tickets sold: ";
  cin >> NumAdult_TS;
  cout << "Number of child tickets sold: ";
  cin >> NumChild_TS;
  cout << "The Percentage of gross amount to be donated to the charity: ";
  cin >> PGross_Charity;

  // Calculate the gross amount.
  GrossAmnt = (ATP * NumAdult_TS) + (CTP * NumChild_TS);

  // Calculate the amount donated.
  AmntDonated = (GrossAmnt * PGross_Charity) / 100;

  // Calculate the net sale.
  netsale = GrossAmnt - AmntDonated;


  cout << "Movie Name: " << movie_name << endl;
  cout << "Number of Tickets Sold: " << NumAdult_TS + NumChild_TS << endl;
  cout << "Gross Amount: " << GrossAmnt << endl;
  cout << "Percentage of Gross Amount Donated: " << PGross_Charity << "%" << endl;
  cout << "Amount Donated: " << AmntDonated << endl;
  cout << "Net Sale: " << netsale << endl;

  return 0;
}
