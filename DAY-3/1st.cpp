//! item array and price array and at the end it will print the item and price
#include <iostream>
#include <vector>

class Shop
{
    std::vector<int> itemID;
    std::vector<int> itemPrice;

public:
    void setPrice();
    void displayPrice();
    void setSecretCode(const std::string &code);      // New function to set the secret code
    void setAdminAccessCode(const std::string &code); // New function to set the admin access code
    bool verifyAdminAccess(const std::string &code);  // New function to verify admin access


private:
    class PrivateShop
    {
        std::string secretCode;
        std::string adminAccessCode;

    public:
        void setSecretCode(const std::string &code)
        {
            secretCode = code;
        }

        void setAdminAccessCode(const std::string &code)
        {
            adminAccessCode = code;
        }

        void displaySecretCode()
        {
            std::cout << "The secret code is: " << secretCode << std::endl;
        }

        void displayAdminAccessCode()
        {
            std::cout << "The admin access code is: " << adminAccessCode << std::endl;
        }

        bool verifyAdminAccess(const std::string &code)
        {
            return adminAccessCode == code;
        }
    };

    PrivateShop privateShop;
};

void Shop::setPrice()
{
    int id, price;
    std::cout << "Enter ID of your Item: ";
    std::cin >> id;
    itemID.push_back(id);
    std::cout << "Enter price of your item: ";
    std::cin >> price;
    itemPrice.push_back(price);
}

void Shop::displayPrice()
{
    for (int i = 0; i < itemID.size(); i++)
    {
        std::cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << std::endl;
    }
}

void Shop::setSecretCode(const std::string &code)
{
    privateShop.setSecretCode(code);
}

void Shop::setAdminAccessCode(const std::string &code)
{
    this->privateShop.setAdminAccessCode(code);
}

bool Shop::verifyAdminAccess(const std::string &code)
{
    return privateShop.verifyAdminAccess(code);
}

int main()
{
    Shop shop;
    std::string secretCode = "2304";       // Set the secret code to "2304"
    std::string adminAccessCode = "loura"; // Set the admin access code
    shop.setSecretCode(secretCode);
    shop.setAdminAccessCode(adminAccessCode);

    std::string enteredCode;
    std::cout << "Enter admin access code: ";
    std::cin >> enteredCode;

    if (shop.verifyAdminAccess(enteredCode))
    {
        std::cout << "Admin access granted." << std::endl;
        shop.setPrice();
        shop.setPrice();
        shop.setPrice();
        shop.setPrice();
        shop.displayPrice();
    }
    else
    {
        std::cout << "Invalid admin access code. Access denied." << std::endl;
    }

    return 0;
}

//? what is the work of the provet class

//! The work of the private class is to provide a layer of abstraction to the outer class. It is used to hide the implementation details of the outer class from the outside world. The private class can only be accessed by the outer class and not by any other class or function outside the outer class. It helps in encapsulating the data and methods of the outer class and provides better security and control over the class's internal workings. It also helps in maintaining the integrity of the class and prevents unauthorized access to its members.

//? what is the secret code

//! The secret code is a private member of the PrivateShop class in the Shop class. It is used to demonstrate the concept of a private class and to show how private members of a class can be accessed only by the class itself and not by any other class or function outside the class. The secret

// tell me the number
