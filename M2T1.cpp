// CSC 134a
// M2T1 - Producst Sales
// Yasameen Al-Husseini
// 9/22/25
// We're going to make the simplest possible
// "checkout" machine

#include <iostream>
using namespace std;

int main() {
    // Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "markers"; // product being sold
    double cost_each = 2.99;
    double total_cost;

    // Greet the customer
    cout << "Welcome to our " << product << "store" << endl;
    cout << "What's your fist name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you," << full_name << endl;


}