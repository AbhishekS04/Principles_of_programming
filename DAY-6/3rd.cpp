#include <iostream>

class Complex
{
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload + operator to add two Complex objects
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
    {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex c3;

    c3 = c1 + c2;

    std::cout << "Result of addition: ";
    c3.display();

    return 0;
}