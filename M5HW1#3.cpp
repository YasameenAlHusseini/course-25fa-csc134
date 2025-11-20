// CSC 134
// M5HW1 
// Yasameen Al-Husseini
// 11/19/2025

# include <iostream>
# include <iomanip> 
using namespace std;

/*Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1-4):*/

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            while (radius <= 0) {
                cout << "Invalid input. Radius must be greater than zero. Please re-enter: ";
                cin >> radius;
            }
            double area = PI * radius * radius;
            cout << fixed << setprecision(2);
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            while (length <= 0) {
                cout << "Invalid input. Length must be greater than zero. Please re-enter: ";
                cin >> length;
            }
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            while (width <= 0) {
                cout << "Invalid input. Width must be greater than zero. Please re-enter: ";
                cin >> width;
            }
            double area = length * width;
            cout << fixed << setprecision(2);
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            while (base <= 0) {
                cout << "Invalid input. Base must be greater than zero. Please re-enter: ";
                cin >> base;
            }
            cout << "Enter the height of the triangle: ";
            cin >> height;
            while (height <= 0) {
                cout << "Invalid input. Height must be greater than zero. Please re-enter: ";
                cin >> height;
            }
            double area = 0.5 * base * height;
            cout << fixed << setprecision(2);
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        case 4:
            cout << "Quitting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please run the program again and select a valid option." <<
    endl;
    }
    return 0;
}