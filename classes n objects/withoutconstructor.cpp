#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double height;
};

int main() {
    Student s1, s2;

    // 🔸 We must manually assign values to every object    // without constructor
    
    s1.name = "Yash";
    s1.age = 20;
    s1.height = 5.9;

    s2.name = "Ravi";
    s2.age = 21;
    s2.height = 6.0;

    cout << "Student 1: " << s1.name << ", " << s1.age << ", " << s1.height << endl;
    cout << "Student 2: " << s2.name << ", " << s2.age << ", " << s2.height << endl;

    return 0;
}
