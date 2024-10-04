//! 2. write a cpp program that will create a class which will calculate the area of triangle, circle and rectangle having the same name.

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    double calculateTriangleArea(double base, double height)
    {
        return 0.5 * base * height;
    }

    double calculateCircleArea(double radius)
    {
        return M_PI * radius * radius;
    }

    double calculateRectangleArea(double length, double width)
    {
        return length * width;
    }
};

int main()
{
    Shape shape;
    int choice;
    double base, height, radius, length, width;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Calculate area of triangle\n";
        cout << "2. Calculate area of circle\n";
        cout << "3. Calculate area of rectangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << shape.calculateTriangleArea(base, height) << endl;
            break;
        case 2:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << shape.calculateCircleArea(radius) << endl;
            break;
        case 3:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << shape.calculateRectangleArea(length, width) << endl;
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
