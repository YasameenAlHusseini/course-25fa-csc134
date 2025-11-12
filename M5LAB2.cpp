// CSC 134
// M5T2 - Complete a Program
// Yasameen Al-Husseini
// 11/11/25

#include <iostream>
#include <limits> // Required for numeric_limits
#include <iomanip> // Required for output formatting

using namespace std;

/* 
The program will ask the user to enter the width and length of a rectangle. 
It will then calculate the area. Finally it will display all three values in well formatted output.
*/

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length, width, area;

    // Get the length and width from the user
    length = getLength();
    width = getWidth();

    // Calculate the area
    area = getArea(length, width);

    // Display the results
    displayData(length, width, area);

    return 0;
}

// Function to get the rectangle's length from the user
double getLength() {
    double length;
    while (true) {
        cout << "Enter the rectangle's length: ";
        if (!(cin >> length) || length <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return length;
        }
    }
}

// Function to get the rectangle's width from the user
double getWidth() {
    double width;
    while (true) {
        cout << "Enter the rectangle's width: ";
        if (!(cin >> width) || width <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return width;
        }
    }
}

// Function to calculate the area given length and width
double getArea(double length, double width) {
    return length * width;
}

// Function to display the length, width, and area in a well-formatted output
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Data ---" << endl;
    // Using fixed, showpoint, and setprecision for formatted output
    cout << fixed << showpoint << setprecision(2); 
    cout << "Length: " << setw(10) << length << endl;
    cout << "Width:  " << setw(10) << width << endl;
    cout << "Area:   " << setw(10) << area << endl;
    cout << "----------------------" << endl;
}