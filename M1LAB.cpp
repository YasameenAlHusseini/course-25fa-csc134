// CSC 134
// M1LAB
// Yasameen Al-Husseini
// 9/14/2025

#include <iostream>
using namespace std;
int main() {
    // This program will simulate an apple orchard.
    // The owner’s name
    string name = "Yasameen Al-Husseini"
    // number of apples owned
    int apples = 255;
    // price per apple
    double pricePerApple = 0.25;
    // calculate the total price of the apples
    // print all the information about the orchard
    cout << "Welcome to " << name;
    cout << " ’s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
    // print all the information about the orchard
    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;
    cout << "Welcome to " << name;
    cout << " 's apple orchard." << endl;
}
