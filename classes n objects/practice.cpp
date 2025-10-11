#include<iostream>
using namespace std ;

class student {
public:
    int age;
    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    student *s = new student();  // dynamic object

    s->age = 20;       // use '->' with pointers
    s->display();      // same here

    delete s;          // free memory (important)
    return 0;
}
