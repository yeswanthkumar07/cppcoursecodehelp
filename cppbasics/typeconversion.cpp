/*Type casting in C++ means converting one data type into another.
For example, converting an int to a float, or a char to an int.*/


#include <iostream> 
using namespace std; 
int main() {
    int a = 10 ;
    float b = 10.55;  // only int + int can be added no diff data types can be add so compiler converts this into float as data cant be lose
    cout << a  + b ; // this is called implicit type casting (done by compiler automatically)
    return 0;
   
}
