/*
CSC 134
M2LAB
Yasameen Al-Husseini
10/4/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
using namespace std;

int main() 
{
    // Constanants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables
    double length,
              width,
              height,
              volume,
              cost,
              charge,
              profit;
    // Set desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Propmt user for length, width, height
    cout << "Enter the dimensions of the box (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    // Calculate volume, cost, charge, profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    // Display results
    cout << "Volume of the crate: " << volume << " cubic feet\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}