/*
CSC 134
M2T2 - Receipt Calculator
Yasameen Al-Husseini
9/28/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
using namespace std;

int main() {
    // Purpose - Create a simple recipt, also handle slaes taxe (8%)
  
    // Declare out variables
  string item = "🍔 Hamburger";
    double item_price = 5.99;
    double tax_percent = 0.88; // 8% is 8/100
    double tax_amount;        // tax in $
    double total;             // price + tax

    // Greet the user and take the order
    cout << "Welcome to out CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Claculate the meal price 
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // 8% of the item
    total = item_price +tax_amount;

    // Print the recipt
    cout << setprecision(2) << fixed;
    cout << "Thank uou for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t$" << item_price << endl;
    cout << "Tax" << "\t\t$" << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;

    return 0; // no errors
}