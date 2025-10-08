/*
CSC 134
M2HW1 - Silver
Yasameen Al-Husseini
10/4/25
*/

#include <iostream>
#include <iomanip> // for 2 descimal places
#include <cmath>   // for math functions
using namespace std;

int main() {
    /* Question 4. Since FTCC has sports teams, you've been hired to write a cheering program.
    The program should output this message:
    Let's go FTCC
    Let's go FTCC
    Let's go FTCC
    Let's go Trojans
    You should use the following variables in your cout statements:
    string school, team; 
    Suggested Improvements: For bonus points, meet these additional constraints:
    You can't print out any raw strings ("that look like this"), only string variables.
    you can only use these string variables:

    string letsGo, school, team, cheerOne, cheerTwo;

    You must use string concatenation to build the strings cheerOne and cheerTwo .

    String concatenation means to use the + operator. An example:

    string fullName = firstName + " " + lastName;
    */

    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    return 0;
}

