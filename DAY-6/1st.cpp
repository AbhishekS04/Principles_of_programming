//! write a c++ prog to impliment multi level inheritance of student registeration system
#include <iostream>
#include <string>

using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void setPersonDetails(const string &name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayPersonDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
{
protected:
    string rollNumber;
    string course;

public:
    void setStudentDetails(const string &rollNumber, const string &course)
    {
        this->rollNumber = rollNumber;
        this->course = course;
    }

    void displayStudentDetails() const
    {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

// Further derived class
class RegisteredStudent : public Student
{
private:
    string registrationNumber;
    string registrationDate;

public:
    void setRegistrationDetails(const string &registrationNumber, const string &registrationDate)
    {
        this->registrationNumber = registrationNumber;
        this->registrationDate = registrationDate;
    }

    void displayRegistrationDetails() const
    {
        displayStudentDetails();
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Registration Date: " << registrationDate << endl;
    }
};

int main()
{
    RegisteredStudent student;
    student.setPersonDetails("John Doe", 20);
    student.setStudentDetails("12345", "Computer Science");
    student.setRegistrationDetails("2023-001", "01-09-2023");

    student.displayRegistrationDetails();

    return 0;
}