/*
CSC 134
M3HW
Yasameen Al-Husseini
10/17/25
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*

Question 2. 

Ask them to enter the price of the meal.

Ask them if the order is dine in or takeaway. (You might do this by a line such as “Please enter 1 if the order is dine in, 2 if it is to go”).

If the order is dine in, add a 15% tip. (This is similar to how you already handled tax, you calculate a $ tip based on the meal price multiplied by the tip percentage.)

Then print the meal price, the tax, the tip (if any), and finally the total amount due, using a receipt format like from the previous assignment.

*/ 

int main() {
    // Purpose - Create a receipt that handles sales tax and tip based on dine-in or takeaway
  
    // Declare our variables
    double meal_price;
    double tax_percent = 0.08; // 8% sales tax
    double tip_percent = 0.15; // 15% tip for dine-in
    double tax_amount;        // tax in $
    double tip_amount = 0.0;  // tip in $
    double total;             // price + tax + tip
    int order_type;           // 1 for dine-in, 2 for takeaway

    // Greet the user and take the order
    cout << "Welcome to The best Restaurant youll ever get to dine in!" << endl;
    cout << "Please enter the price of your meal: $";
    cin >> meal_price;
    cout << "Please enter 1 if the order is dine-in, 2 if it is to go: ";
    cin >> order_type;

    // Calculate the sales tax
    tax_amount = meal_price * tax_percent;

    // Calculate the tip if dine-in
    if (order_type == 1) {
        tip_amount = meal_price * tip_percent;
    }

    // Calculate the total price
    total = meal_price + tax_amount + tip_amount;

    // Print the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for choosing us for the meal" << endl;
    cout << "------------------------------" << endl;
    cout << "Meal Price" << "\t$" << meal_price << endl;
    cout << "Tax" << "\t\t$" << tax_amount << endl;
    if (order_type == 1) {
        cout << "Tip" << "\t\t$" << tip_amount << endl;
    }
    cout << "------------------------------" << endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;

    return 0; // no errors
}
