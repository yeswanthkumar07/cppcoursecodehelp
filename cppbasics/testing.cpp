#include <iostream>
using namespace std;

int main() {
    int i = 1;
    for(;;) {   // no init, no condition, no update → infinite
        cout << i << endl;
        i++;
    }
    return 0;
}
