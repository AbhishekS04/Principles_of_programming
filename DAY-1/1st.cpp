// //! 1.A person is traveling in a train from sealdah to barasat , he want to search whether madhyamgram is there in between or not . WAP to check whether he has found his destination or not .

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "The available stations nearby are:" << endl
         << "1. Sealdah" << endl
         << "2. Dum Dum" << endl
         << "3. Belgharia" << endl
         << "4. Agarpara" << endl
         << "5. Sodpur" << endl
         << "6. Madhyamgram" << endl
         << "7. Barasat" << endl;

    int destination;
    string stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodpur", "Madhyamgram", "Barasat"};
    int n = sizeof(stations) / sizeof(stations[0]);

    cout << "Enter the station number: ";
    cin >> destination;

    bool found = false;
    string station;

    if (destination >= 1 && destination <= 7)
    {
        string stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodpur", "Madhyamgram", "Barasat"};
        station = stations[destination - 1];
        found = true;
    }

    if (found)
    {
        cout << "Yes, " << station << " is there in between Sealdah and Barasat." << endl;
    }
    else
    {
        cout << "No, " << destination << " is not there in between Sealdah and Barasat." << endl;
    }

    return 0;
}
// string stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodpur", "Madhyamgram", "Barasat"};
// string destination;
// cout << "Enter the station name : ";
// cin >> destination;
// for (int i = 0; i < 7; i++)
// {
//     if (stations[i] == destination)
//     {
//         cout << "Yes, " << destination << " is there in between Sealdah and Barasat." << endl;
//         return 0;
//     }
// }
// cout << "No, " << destination << " is not there in between Sealdah and Barasat." << endl;
//     return 0;

/*
1.A person is traveling in a train from sealdah to barasat , he want to search whether madhyamgram is there in between or not . WAP to check whether he has found his destination or not .
2. sir hhas come into class , he wants to check whether debasmita is there or not
3. WAP in c , to implement bouble shot , if the array is shorted then it will not iterate
4. WAP in c to check if a string is palindrome or not , without using string.h
*/