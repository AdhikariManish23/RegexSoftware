#include <bits/stdc++.h>
using namespace std;
int upperCaseCount(string s)
{
    int count = 0;
    for (auto ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }
    return count;
}
int lowerCaseCount(string s)
{
    int count = 0;
    for (auto ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            count++;
        }
    }
    return count;
}
int digitCount(string s)
{
    int count = 0;
    for (auto ch : s)
    {
        if (ch >= '0' && ch <= '9')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "manish23@#ADHI*&678";

    int upperCase = upperCaseCount(s);
    cout << "Upper Case : " << upperCase;
    cout << endl;
    int lowerCase = lowerCaseCount(s);
    cout << "Lower Case : " << lowerCase;
    cout << endl;
    int digit = digitCount(s);
    cout << "Digits are : " << digit;
}