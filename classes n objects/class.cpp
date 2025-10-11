#include <iostream>
using namespace std;


class student {       //  class creation :

    public :
        int age;
        int weight;
        int height
        string name;



} ;
int main(){

    // cout << sizeof (student) << endl ;
    

    // object creation has two ways static and dynamic

    // static object creation 
    student s1;         // This object is stored in stack memory.

    // dynamic object creation (we knw that we do int by using pointers and new keyword) :

    student*s = new student(); // The new keyword allocates memory for one student object on the heap.
                              // That address is stored in the pointer s (s is a pointer to a student object created in heap memory.) meains in pointer s we stored dynamically
    return 0;

}
