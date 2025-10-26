#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    string name;
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;    // Assign value passed from main()
        name = n;
        cout << "Parameterized Constructor called!" << endl;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};
int main() {
    Student s1(1, "Alice");   // Object created with values
    s1.display();
    Student s2(2, "Bob");     // Another object with different values
    s2.display();
    return 0;
}
/*
it can be initialized with different values when the object is created.
A parameterized constructor lets you pass values when creating an object.
Those values are used to initialize the object’s data members.
This provides flexibility — different objects can start with different data.
*/
