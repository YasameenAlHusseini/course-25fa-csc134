/*
CSC 134
M3T1
Yasameen Al-Husseini
10/11/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
using namespace std;

int main() {
    // Ask the user to enter the length and width 
    // of two rectangles, then display the area of both.

    // Declare out variables

    double length1, width1, area1;
    double length2, width2, area2;

    // Get the length and width of the first rectangle

    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Get the length and width of the second rectangle

    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    // Calculate the area of both rectangles

    area1 = length1 * width1;
    area2 = length2 * width2;

    // Display the area of both rectangles

    cout << setprecision(2) << fixed;
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;
    
    // Determine which rectangle has the greater area

    if (area1 > area2) {
        cout << "The first rectangle has the greater area." << endl;
    } else if (area2 > area1) {
        cout << "The second rectangle has the greater area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
    
    return 0; // no errors
}

