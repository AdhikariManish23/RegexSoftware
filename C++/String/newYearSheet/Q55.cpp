#include <bits/stdc++.h>
using namespace std;
bool linearsearch(string s, char key)
{
    for (auto ch : s)
    {
        if (ch == key)
            return true;
    }
    return false;
}
string removeSpecialChar(string s)
{
    string specialChar = "!@#$%^&*()~`_+-=:;><.,?/|{}[]";
    string word = "";
    int count = 0;
    for (auto ch : s)
    {
        if (!linearsearch(specialChar, ch))
        {
            word += ch;
        }
    }
    return word;
}
int main()
{
    string s = "manish23@#ADHI*&678";

    string ans = removeSpecialChar(s);
    cout << ans;
}