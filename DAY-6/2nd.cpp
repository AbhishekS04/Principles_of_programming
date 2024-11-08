
#include <iostream>
using namespace std;

// Base class
class University
{
public:
    void universityName()
    {
        cout << "University: XYZ University" << endl;
    }
};

// Derived class from University
class Department : public virtual University
{
public:
    void departmentName()
    {
        cout << "Department: Computer Science" << endl;
    }
};

// Another derived class from University
class Examination : public virtual University
{
public:
    void examDetails()
    {
        cout << "Examination: Semester Exams" << endl;
    }
};

// Derived class from both Department and Examination
class Student : public Department, public Examination
{
public:
    void studentDetails()
    {
        cout << "Student: John Doe" << endl;
        cout << "Roll No: 12345" << endl;
    }
};

int main()
{
    Student student;
    student.universityName();
    student.departmentName();
    student.examDetails();
    student.studentDetails();
    return 0;
=======
#include <iostream>
using namespace std;

// Base class
class University {
public:
    void universityName() {
        cout << "University: XYZ University" << endl;
    }
};

// Derived class from University
class Department : public virtual University {
public:
    void departmentName() {
        cout << "Department: Computer Science" << endl;
    }
};

// Another derived class from University
class Examination : public virtual University {
public:
    void examDetails() {
        cout << "Examination: Semester Exams" << endl;
    }
};

// Derived class from both Department and Examination
class Student : public Department, public Examination {
public:
    void studentDetails() {
        cout << "Student: John Doe" << endl;
        cout << "Roll No: 12345" << endl;
    }
};

int main() {
    Student student;
    student.universityName();
    student.departmentName();
    student.examDetails();
    student.studentDetails();
    return 0;
}