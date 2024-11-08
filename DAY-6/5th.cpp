<<<<<<< HEAD
#include <iostream>
#include <stdexcept>

int divide(int a, int b)
{
    if (b == 0)
    {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main()
{
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    try
    {
        int result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
=======
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    try {
        int result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
>>>>>>> 765c4527e3b1b3262992620fd0d65b07de6f0d21
}