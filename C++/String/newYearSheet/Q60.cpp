#include <bits/stdc++.h>
using namespace std;

string removeDigits(string s)
{
    string word = "";

    for (auto ch : s)
    {
        if (!(ch >= '0' && ch <= '9'))
        {
            word += ch;
        }
    }
    return word;
}

int main()
{
    string s = "mani23Adhik34";
    string ans = removeDigits(s);
    cout << ans;
}