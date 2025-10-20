// CSC 134
// M4T1 - While
// Yasameen Al-Husseini
// 10/19/2025


#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "Hello" five times then end with "Thats all!
    int count = 0;
    while (count < 5)
    {
        cout << "Hello" << endl;
        count++; // increment count by 1
    }
    cout << "Thats all!" << endl;
    // Part 2
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    int num = MIN_NUM;
    // Print table header
    cout << "Number\tSquare\tCube" << endl;
    cout << "------------------------" << endl;
    while (num <= MAX_NUM)
    {
        int square = num * num;
        int cube = num * num * num;
        cout << num << "\t" << square << "\t" << cube << endl;
        num++; // increment num by 1
    }

    return 0; // done
}