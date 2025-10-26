#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;

    // Constructor with parameters
    // This function is called automatically when an object is created.
    // It initializes the data members.
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor: Object created for " << name << endl;
    }

    // Destructor
    // This function is called automatically when the object is destroyed.
    // It is used for cleanup or closing tasks.
    ~Student() {
        cout << "Destructor: Object destroyed for " << name << endl;
    }

    // Function to display student information
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Program started..." << endl;

    // Creating two objects; constructor is called for each one
    Student s1(101, "Ali");
    Student s2(102, "Sara");

    // Displaying object data
    s1.display();
    s2.display();

    cout << "Program ending..." << endl;

    // Destructor is called automatically for each object here
    return 0;
}