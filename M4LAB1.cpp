/*
CSC 134
M4Lab1
Yasameen Al-Husseini
10/25/25
*/

#include <iostream>
using namespace std;

int main () {
    // declare variables
    int height, width;

    // start with a set size
    //height = 5;
    //width = 5;
    // ask user
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;

    // basic validation
    if (height <= 0 || width <= 0) {
        cout << "Height and width must be positive integers." << endl;
        return 1;
    }

    // test: make a row of astrisks
     cout << "one row" << endl;
     for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl; // finish the row

    // test: make a column
    
    cout << "one column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }

    // make the entire block
    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        // print one row
        for (int i=0; i < width; i++) {
            cout << "* ";
        }
        cout << endl; // end the row with a new line
    }
    return 0;
}