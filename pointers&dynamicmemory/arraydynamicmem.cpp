#include <iostream>
using namespace std ;

int main() {


    int *ptr = new int[5] ;  // new keyword used to allocate heap memory o dynamic memory
    
    
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    

    for (int i = 0 ; i < 5 ; i++) {
         
        cout << ptr[i] << endl  ;
    }


    // after using the dynamic memory we should delete it, but c++ have no automatic mechanism as java so we delete keyword

    delete []ptr ;

    
    return 0 ;
}     