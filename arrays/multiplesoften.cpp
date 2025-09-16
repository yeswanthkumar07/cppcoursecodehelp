#include <iostream>
using namespace std;

void multiplesoften(int size) {   // use void, not int
    int count = 1;
    for (int i = 0; i < size; i++) {   // use size instead of 9
        cout << count * 10 << " ";
        count++;
    }
}

int main() {
    multiplesoften(50);   // prints first 8 multiples of 10
    return 0;
}
