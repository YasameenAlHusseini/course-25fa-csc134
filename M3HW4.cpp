/*
CSC 134
M3HW
Yasameen Al-Husseini
10/17/25
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*

Question 4. Write a simple “Math practice” program that meets the following requirements.

The program should generate two single digit numbers at random.
The program should print out the numbers as a simple addition problem.

The program should ask the user to enter the answer.

Finally, the program will tell the user whether or not their answer was correct.

Sample Run (your output may vary from this format)

What is 4 plus 5?
8
Incorrect.
*/

int main() {
    // Simple math practice program for addition of two single digit numbers

    // Declare variables
    int num1;
    int num2;
    int user_answer;
    int correct_answer;

    // Generate two random single digit numbers
    srand(static_cast<unsigned int>(time(0))); // Seed for randomness
    num1 = rand() % 10; // Random number between 0 and 9
    num2 = rand() % 10; // Random number between 0 and 9

    // Calculate the correct answer
    correct_answer = num1 + num2;

    // Ask the user the addition problem
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> user_answer;

    // Check if answer is correct
    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << correct_answer << "." << endl;
    }

    return 0;
}