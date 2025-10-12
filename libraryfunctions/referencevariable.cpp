#include <iostream>
#include <string>
using namespace std;

int main () {


    int a =10 ;

    int &myrefvariable  = a; // & reference variable 
    cout << myrefvariable << endl ;
    cout << myrefvariable + 1 ;
}