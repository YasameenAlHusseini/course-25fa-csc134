/*
CSC 134
M3T1
Yasameen Al-Husseini
11/2/25
*/

#include <iostream>
using namespace std;

/* output from the program:
5 times 1 is 5.
loop to print the "5 times" table, using the format above. 
print everything from "5 times 1 is 5." to "5 times 12 is 60." 


int main() {
    // print the 5 times table
    for (int i = 1; i <= 12; i++) {
        cout << "5 times " << i << " is " << (5 * i) << "." << endl;
    }
    return 0; // no errors
}


Modify your program as follows.

Instead of the "5 times" table, ask the user to enter a number from 1 to 12. Create that table instead.
*/

int main() {
    int number;

    // Ask the user to enter a number from 1 to 12
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Validate the input
    if (number < 1 || number > 12) {
        cout << "Please enter a valid number between 1 and 12." << endl;
        return 1; // exit with error
    }

    // Print the multiplication table for the entered number
    for (int i = 1; i <= 12; i++) {
        cout << number << " times " << i << " is " << (number * i) << "." << endl;
    }
    return 0; // no errors
}