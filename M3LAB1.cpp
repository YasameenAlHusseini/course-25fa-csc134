// CSC 134
// M3LAB1
// Yasameen Al-Husseini
// 10/05/2025


// compiler directives
// (required for the program to run)
#include <iostream>
#include <string>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Do you choose Drink 1 or Drink 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Drink 1" << endl;
    cout << "You got a Fanta!" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose Drink 2" << endl;
    cout << "You got a Sprite" << endl;

  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
    // ask the question
  std::string mealAnswer;1
  
  cout << "Would you like a meal" << endl;
  cout << "Type yes or no: "; 
  cin >> mealAnswer;

  // using if, make a decision based on the user's choice
  if (mealAnswer == "yes") {
    cout << "Do you choose Meal 1 or Meal 2?" << endl;
    cout << "Type 1 or 2: "; 
    cin >> choice;

    if (choice == 1) {
        cout << "You chose Meal 1" << endl;
        cout << "You got a plate of wings!" << endl;
        cout << "Enjoy your meal!" << endl;
    }
    else if (choice == 2) {
        cout << "You chose Meal 2" << endl;
        cout << "You got a plate of sushi" << endl;
        cout << "Enjoy your meal!" << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }
  }
  else if (mealAnswer == "no") {
    cout << "Enjoy your drink!" << endl;
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method