/*
CSC 134
MmLAB2
Yasameen Al-Husseini
10/12/25
*/

/*
program that converts numerical grades into letter grades based on the following criteria:

A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: 0 - 59
*/
#include <iostream>
#include <iomanip> // for 2 descimal places
using namespace std;

int main() {
    // Declare out variables
    double grade;

    // Ask the user to enter a numerical grade
    cout << "Enter a numerical grade (0-100): ";
    cin >> grade;

    // Determine the letter grade using if-else statements
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } else if (grade >= 80 && grade < 90) {
        cout << "Your letter grade is: B" << endl;
    } else if (grade >= 70 && grade < 80) {
        cout << "Your letter grade is: C" << endl;
    } else if (grade >= 60 && grade < 70) {
        cout << "Your letter grade is: D" << endl;
    } else if (grade >= 0 && grade < 60) {
        cout << "Your letter grade is: F" << endl;
    } else {
        cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
    }

    return 0; // no errors
}