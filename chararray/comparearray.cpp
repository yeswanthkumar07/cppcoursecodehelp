#include <iostream>
#include <cstring>
using namespace std;

bool comparearray(char a[], char b[]) {
    int aLength = strlen(a);
    int bLength = strlen(b);

    if (aLength != bLength) {
        return false;
    }

    for (int i = 0; i < aLength; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true; // only return true after full comparison
}

int main() {
    char array1[] = "HELLO";
    char array2[] = "HELLO";

    if (comparearray(array1, array2)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }

    return 0;
}
