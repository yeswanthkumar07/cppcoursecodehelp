#include<iostream>
#include "headerfile.h"
using namespace std;

int main() {
    // You can’t create an object of the abstract class:
    // bird b;  // ❌ Error: cannot instantiate abstract class

    // But you can create pointers or references to it:
    bird* b1 = new sparrow();
    bird* b2 = new eagle();

    // Call the overridden methods using base class pointer
    b1->eat();  // Output: Sparrow is eating
    b1->fly();  // Output: Sparrow is flying

    b2->eat();  // Output: Eagle is eating
    b2->fly();  // Output: Eagle is flying

    // Clean up memory
    delete b1;
    delete b2;

    return 0;
}
