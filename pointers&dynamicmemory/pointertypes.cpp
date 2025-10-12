#include <iostream>
using namespace std;

int main() {
    int a = 10;      // normal variable
    int *ptr = &a;   // single pointer (stores address of a)
    int **dptr = &ptr; // double pointer (stores address of ptr)
    int ***tptr = &dptr; // triple pointer (stores address of dptr)

    cout << "Value of a: " << a << endl;
    cout << "Value using *ptr: " << *ptr << endl;
    cout << "Value using **dptr: " << **dptr << endl;
    cout << "Value using ***tptr: " << ***tptr << endl;

    return 0;
}

