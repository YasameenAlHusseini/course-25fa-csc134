// CSC 134a
// M2T1 - Producst Sales
// Yasameen Al-Husseini
// 9/22/25
// We're going to make the simplest possible
// "checkout" machine

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main() {
    // Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "markers"; // product being sold
    int amount_purchased;
    double cost_each = 2.99;
    double total_cost;

    // Greet the customer
    cout << "Welcome to our " << product << " store" << endl;
    cout << "What's your fist name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;
    
    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like to today? ";
    cin >> amount_purchased;

    // Calculate total Price
    total_cost = amount_purchased * cost_each;

    // Formatted 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "that will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors

}