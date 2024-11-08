<<<<<<< HEAD
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show function called." << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Calls Derived class show function

    return 0;
=======
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Calls Derived class show function

    return 0;
>>>>>>> 765c4527e3b1b3262992620fd0d65b07de6f0d21
}