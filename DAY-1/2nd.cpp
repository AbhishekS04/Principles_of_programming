//! sir has come into class , he wants to check whether debasmita is there or not

#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    string rollNumber;
};

int main()
{
    Student students[] = {
        {"Sayan", "32"}, {"Debasmita", "27"}, {"Snehasish", "12"}, {"Abhishek", "11"}, {"Tushar", "29"}, {"Sougata", "3"}};

    string searchInput;
    cout << "Enter the student name or roll number: ";
    cin >> searchInput;

    for (const auto &student : students)
    {
        if (student.name == searchInput || student.rollNumber == searchInput)
        {
            cout << "Yes, " << student.name << " is present in the class." << endl;
            return 0;
        }
    }

    cout << "No, " << searchInput << " is not present in the class." << endl;

    return 0;
}

//?
// #include <iostream>
// #include <string>

// using namespace std;

// struct Student
// {
//     string name;
// };

// int main()
// {
//     const Student students[] = {
//         {"Sayan"}, {"Debasmita"}, {"Snehasish"}, {"Tushar"}, {"Soma"}, {"Abhishek"}, {"Tushar"}, {"Sougata"}};

//     string searchInput;
//     cout << "Enter the student name: ";
//     cin >> searchInput;

//     if (searchInput == "Debasmita")
//     {
//         string proof;
//         cout << "Debasmita, please provide your proof of presence: ";
//         cin >> proof;

//         // Check if the proof is valid
//         if (proof == "present")
//         {
//             cout << "Yes, Debasmita is present in the class." << endl;
//         }
//         else
//         {
//             cout << "Sorry, Debasmita's proof of presence is invalid." << endl;
//         }
//     }
//     else
//     {
//         for (const auto &student : students)
//         {
//             if (student.name == searchInput)
//             {
//                 cout << "Yes, " << student.name << " is present in the class." << endl;
//                 return 0;
//             }
//         }

//         cout << "No, " << searchInput << " is not present in the class." << endl;
//     }
//     return 0;
// }