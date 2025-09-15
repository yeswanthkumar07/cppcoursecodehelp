// A switch statement in C++ is used to execute one block of code among many options based on the value of an expression (usually an integer or character).
// It’s like a cleaner alternative to multiple if-else statements.

#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    // switch statement start
    switch (grade) {
        case 'A':
            cout << "You will be in range of 90 - 100" << endl;
            break;
        case 'B':
            cout << "You will be in range of 80 - 90" << endl;
            break;
        case 'C':
            cout << "You will be in range of 70 - 80" << endl;
            break;
        default:
            cout << "You failed" << endl;
            break;
    }
    return 0;
}
    