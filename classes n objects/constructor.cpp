#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double height;

    // ✅ Parameterized Constructor
    Student(string n, int a, double h) {      // example of with constructor
        name = n; 
        age = a;
        height = h;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Height: " << height << endl;
    }
};

int main() {
    // 🔸 Values are passed directly at object creation
    Student s1("Yash", 20, 5.9);
    Student s2("Ravi", 21, 6.0);

    s1.display();
    s2.display();

    return 0;
}
