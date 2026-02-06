#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Constructor 1 – no arguments
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor 2 – one argument
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor 3 – two arguments
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Rahul");
    Student s3("Himanshu", 17);

    s1.display(); // Name: Unknown, Age: 0
    s2.display(); // Name: Rahul, Age: 0
    s3.display(); // Name: Himanshu, Age: 17

    return 0;
}
