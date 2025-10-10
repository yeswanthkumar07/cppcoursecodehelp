// A pointer is a variable that stores the memory address of another variable.

#include<iostream>
using namespace std ;


int main(){


    int num = 10;
    int *ptr = &num ;

    cout << "variable : " << num << endl;
    cout << "address of num :" << &num << endl ;
    cout << "pointer stores :" << ptr << endl ;
    cout << "value using pointer :" << *ptr << endl;
}
