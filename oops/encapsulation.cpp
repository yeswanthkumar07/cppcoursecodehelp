#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    int age;
    string name;

public:
    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    void setMarks(int m) {
        if (m > 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks!" << endl; // ✅ fixed missing semicolon
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    // ✅ Correct function names
    s1.setName("Yashwanth");
    s1.setMarks(95);
    s1.setAge(20);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
