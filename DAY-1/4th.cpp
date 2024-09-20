//! WAP in c++ to check if a string is palindrome or not , without using string.h 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The string " << str << " is a palindrome." << endl;
    }
    else
    {
        cout << "The string " << str << " is not a palindrome." << endl;
    }

    return 0;
}

//? explanation:
//? This program checks if a given string is a palindrome or not. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization). For example, "madam" is a palindrome.

//? The program first takes a string input from the user. It then calculates the length of the string by iterating through the characters until it finds the null character '\0'. The length of the string is stored in the variable length.

//? The program then checks if the string is a palindrome by comparing the characters from the beginning and end of the string. It iterates through the first half of the string and compares each character with its corresponding character from the end of the string. If any pair of characters does not match, the isPalindrome flag is set to false and the loop breaks.

//? Finally, the program prints whether the given string is a palindrome or not based on the value of the isPalindrome flag.