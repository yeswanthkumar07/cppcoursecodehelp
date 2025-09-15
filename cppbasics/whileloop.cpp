/*
A while loop repeats a block of code as long as a condition is true.

If the condition is true → the loop runs.

If the condition is false → the loop stops.
syntax 
while (condition) {
    // code block
    // updation (i=i+1)
}
*/
#include <iostream> 
using namespace std; 
int main() {
    int i = 0 ;
    while (i <= 10)
    {
    cout << i << endl;
    i += 1 ;
    }
    
    return 0;
   
}
