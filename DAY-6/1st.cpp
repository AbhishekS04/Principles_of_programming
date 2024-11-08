#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class from Person
class Student : public Person {
protected:
    int studentID;

public:
    void setStudentDetails(string n, int a, int id) {
        setPersonDetails(n, a);
        studentID = id;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class from Student
class Registration : public Student {
private:
    string course;
    string registrationDate;

public:
    void setRegistrationDetails(string n, int a, int id, string c, string rDate) {
        setStudentDetails(n, a, id);
        course = c;
        registrationDate = rDate;
    }

    void displayRegistrationDetails() {
        displayStudentDetails();
        cout << "Course: " << course << endl;
        cout << "Registration Date: " << registrationDate << endl;
    }
};

int main() {
    Registration reg;
    reg.setRegistrationDetails("John Doe", 20, 12345, "Computer Science", "2023-10-01");
    reg.displayRegistrationDetails();

    return 0;
}