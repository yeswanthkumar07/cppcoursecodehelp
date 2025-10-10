#include <iostream>
using namespace std ;

int main() {


    int *ptr = new int ;  // new keyword used to allocate heap memory o dynamic memory
    *ptr = 100 ;
    cout << *ptr << endl ;


    // after using the dynamic memory we should delete it, but c++ have no automatic mechanism as java so we delete keyword

    delete ptr ;

    
    return 0 ;
}