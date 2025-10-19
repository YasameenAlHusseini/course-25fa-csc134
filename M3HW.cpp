/*
CSC 134
M3HW
Yasameen Al-Husseini
10/17/25
*/

#include <iostream>
#include <string>
using namespace std;

/* Question 1
Sample
Hello, I’m a C++ program!
Do you like me? Please type yes or no.
(yes)
That’s great! I’m sure we’ll get along.
(no)
Well, maybe you’ll learn to like me later.
(any other input)
If you’re not sure… that’s OK.
*/

int main() {
    string response;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> response;

    if (response == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (response == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK." << endl;
    }

    return 0;
}


