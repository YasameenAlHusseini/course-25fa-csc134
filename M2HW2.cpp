/*
CSC 134
M2HW1 - Bronze
Yasameen Al-Husseini
10/4/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
#include <cmath>   // for math functions
using namespace std;

int main() {
    // Question 3. You are throwing a pizza party. Each visitor should get three slices of pizza.
    // The program should ask how many pizzas you order, how many slices per pizza, and how many visitors are coming.
    // The program should calculate and display how many pieces of pizza are left over.

    cout << "Enter the number of pizzas ordered: ";
    int numPizzas;
    cin >> numPizzas;
    cout << "Enter the number of slices per pizza: ";
    int slicesPerPizza;
    cin >> slicesPerPizza;
    cout << "Enter the number of visitors: ";
    int numVisitors;
    cin >> numVisitors;
    int totalSlices = numPizzas * slicesPerPizza;
    int totalNeededSlices = numVisitors * 3;
    int slicesLeftOver = totalSlices - totalNeededSlices;
    cout << "Number of slices left over: " << slicesLeftOver << endl;
    return 0;
}
