#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Question 51

    // float a, b, c;
    // cout << "Enter the 1st value : ";
    // cin >> a;

    // cout << "Enter the 2nd value : ";
    // cin >> b;

    // cout << "Enter the 3rd value : ";
    // cin >> c;

    // float pro = a * b * c;
    // cout << "Product is : " << pro;

    // Question 52

    string s = "i am learning C programming";
    string word = "";
    for (char &ch : s) // It takes each character directly from the string s because '&' work like a reference variable
                       // ch is a reference (real memory, not a copy)
                       // If you change ch, the original string s changes
    {
        if (ch == ' ')
        {
            ch = '.';
        }
    }
    cout << s;

    // Both are different Question doing slightly changes

    // string s = "i am learning C programming";
    // string word = "";
    // for (char ch : s) // It takes each character as a COPY
    //                   // ch is a temporary variable
    //                   // If you change ch, original string does NOT change
    // {
    //     if (ch != ' ')
    //     {
    //         word = word + ch;
    //     }
    //     else
    //     {
    //         cout << word << "\n";
    //         word = ""; // this will reset the word again after printing the prvious word
    //     }
    // }
    // cout << word;
}