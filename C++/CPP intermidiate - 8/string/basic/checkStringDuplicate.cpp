#include <bits/stdc++.h>
using namespace std;
bool linearSearch(string str, char key)
{
    for (auto ch : str)
    {
        if (ch == key)
        {
            return true;
        }
    }
    return false;
}

bool isDuplicate(string str)
{
    string newStr = "";
    for (auto ch : str)
    {
        if (linearSearch(newStr, ch))
            return false;
        else
            newStr = newStr + ch;
    }
    return true;
}
int main()
{
    string s = "abcabc";
    cout << isDuplicate(s);

    return 0;
}