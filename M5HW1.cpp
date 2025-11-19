// CSC 134
// M5HW1 
// Yasameen Al-Husseini
// 11/19/2025

# include <iostream>
# include <iomanip> 
using namespace std;

/*Write a program that calculates the average rainfall for three months. The program should ask the
user to enter the name of each month, such as June or July, and the amount of rain (in inches)
that fell each month. The program should then display the average of the three rainfall amounts,
rounded to 2 decimal places.*/

int main(){
    const int numMonths = 3;
    string monthNames [numMonths];
    double rainfallAmounts [numMonths];
    double totalRainfall = 0.0;

    // Input month names and the amount of rainfall for each month

    for (int i = 0; i < numMonths; i++) {
        cout << "Enter month:";
        cin >> monthNames[i];
        cout << "Enter rainfall for" << monthNames[i] << ":";
        cin >> rainfallAmounts[i];
        totalRainfall += rainfallAmounts [i];
    }
}


