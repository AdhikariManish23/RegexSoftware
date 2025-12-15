#include <bits/stdc++.h>
using namespace std;
bool linearsearch(string s, char key)
{
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str = "manish";
    char ch = 'n';
    if (linearsearch(str, ch))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not found";
    }
}