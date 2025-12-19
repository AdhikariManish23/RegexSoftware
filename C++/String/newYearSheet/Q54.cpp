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
string extractAlphabets(string s)
{
    string digits = "1234567890!@#$%^&*()~`_+-=:;><.,?/|{}[]";
    string word = "";
    int count = 0;
    for (auto ch : s)
    {
        if (!linearsearch(digits, ch))
        {
            word += ch;
        }
    }
    return word;
}
int main()
{
    string s = "manish23@#ADHI*&678";

    string ans = extractAlphabets(s);
    cout << ans;
}