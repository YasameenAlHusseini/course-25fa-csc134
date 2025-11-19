// CSC 134
// M5HW1 
// Yasameen Al-Husseini
// 11/19/2025

# include <iostream>
# include <iomanip> 
using namespace std;

/*Ask the user to enter width, length, and height for the block. These values should be of type
double. Calculate the volume of the block.
Input Validation: no side can be zero or less. */

int main(){
    double width, length, height;

    // Input width
    cout << "Enter the width of the block: ";
    cin >> width;
    while (width <= 0) {
        cout << "Invalid input. Width must be greater than zero. Please re-enter: ";
        cin >> width;
    }

    // Input length
    cout << "Enter the length of the block: ";
    cin >> length;
    while (length <= 0) {
        cout << "Invalid input. Length must be greater than zero. Please re-enter: ";
        cin >> length;
    }

    // Input height
    cout << "Enter the height of the block: ";
    cin >> height;
    while (height <= 0) {
        cout << "Invalid input. Height must be greater than zero. Please re-enter: ";
        cin >> height;
    }

    // Calculate volume
    double volume = width * length * height;

    // Display volume
    cout << fixed << setprecision(2);
    cout << "The volume of the block is: " << volume << endl;

    return 0;
}

