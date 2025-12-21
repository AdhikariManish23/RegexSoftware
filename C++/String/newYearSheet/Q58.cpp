#include <bits/stdc++.h>
using namespace std;
// Question count special character (!@$@$#%#%#)
bool linearsearch(string s, char key)
{
    for (auto ch : s)
    {
        if (ch == key)
            return true;
    }
    return false;
}
string replaceSpecialChar(string s)
{
    string specialChar = ":;'?/><.,[]{}+_)(*&^%$#@!~)`-=";
    string word = "";
    int count = 0;
    for (auto ch : s)
    {
        if (!linearsearch(specialChar, ch))
        {
            word += ch;
        }
        else
        {
            word += ' ';
        }
    }
    return word;
}
int main()
{
    string s = "m@anish^adhikari*singh";

    string ans = replaceSpecialChar(s);
    cout << ans;
    return 0;
}