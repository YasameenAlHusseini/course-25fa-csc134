/*
CSC 134
M6T1 - Loops and Arrays
Yasameen Al-Husseini
12/4/25

*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of cars that pass a construction site each day, two different ways
    method1();
    method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - no arrays
    // Count 5 days cars, get total and average
    cout << "Enter each car found per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int car_today;     // current value, to add
    int car_total = 0; // add up 
    double car_avg = 0;// average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> car_today;
        car_total += car_today;
        count++; // Move to next day
    }
    cout << "Total = " << car_total << endl;
    car_avg = (double) car_total / SIZE;
    cout << "Average = " << car_avg << endl;
}

void method2() {
    // Method 2 uses two arrays:
    // Names of the days
    // # cars found on the days

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized
    int car[SIZE]; // not initialized
    int car_total = 0;
    double car_avg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> car[i];
    }
    // print output in "tabular" (table) format
    cout << "Day\tCar" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << car[i] << endl;
        // find the total
        car_total += car[i];
    }
    // find total, print results
    car_avg = (double) car_total / SIZE;
    cout << "Total = " << car_total << endl;
    cout << "Average = " << car_avg << endl;

    //Print out or graph the full week's data.
    //By "graph", we'll see if we can print out a simple ASCII bar chart.

    cout << "\nCar Bar Chart\n";
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << " ";
        for (int j=0; j < car[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
