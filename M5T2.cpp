// CSC 134
// M5T2 - More Practice with Functions
// Yasameen Al-Husseini
// 11/9/25

#include <iostream>
using namespace std;

// given 2 numjbers print them nicely on a line.
void printResults(int count, int result) {
    cout << count << " squared = " << result << endl;
}

// given a number, return the square of it.
int square(int count) {
    int result;
    result = count * count;// squared
    return result;
}

int main()
{
    // count some numbers
    // and find a result for each
    int count = 1;
    int result;

    // this ver will be squared

    while (count <= 10) {
        // what is 100 times the count?
        result = square(count);
        printResults(count, result);
        count++;
    }
}