/*
CSC 134
M2HW1 - Silver
Yasameen Al-Husseini
10/4/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
#include <cmath>   // for math functions
using namespace std;

int main() {
// Question 1
// The program should ask the user for their name. 
// It should then ask for the following information 
// (all units are dollars): Starting account balance, Amount of deposit, Amount of withdrawal

cout << "Enter your name: ";
string name;
cin >> name;
cout << "Hello, " << name << "!" << endl;
cout << "Enter your starting account balance: $";
double startingBalance;
cin >> startingBalance;
cout << "Enter the amount of deposit: $";
double deposit;
cin >> deposit;
cout << "Enter the amount of withdrawal: $";
double withdrawal;
cin >> withdrawal;
double endingBalance = startingBalance + deposit - withdrawal;

// The program should then display the following information:
// Name on the account
// Account number ( you can generate this any way you see fit -- a number you pick, or a random number, for example )
// Final account balance.

cout << "Account Name: " << name << endl;
int accountNumber = rand() % 1000000; // Random 6 digit account number
cout << "Account Number: " << accountNumber << endl;
cout << "Final Account Balance: $" << setprecision(2) << fixed << endingBalance
    << endl;

return 0;

}