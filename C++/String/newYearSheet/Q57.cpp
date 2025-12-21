#include <iostream>
using namespace std;

bool isAlphanumeric(string s)
{
    bool hasAlpha = false;
    bool hasDigit = false;

    if (s.length() == 0)
        return false;

    for (char ch : s)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            hasAlpha = true;
        }
        if (ch >= '0' && ch <= '9')
        {
            hasDigit = true;
        }
        else
        {
            return false;
        }
    }

    return hasAlpha && hasDigit;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isAlphanumeric(s))
        cout << "Alphanumeric";
    else
        cout << "Not Alphanumeric";

    return 0;
}
