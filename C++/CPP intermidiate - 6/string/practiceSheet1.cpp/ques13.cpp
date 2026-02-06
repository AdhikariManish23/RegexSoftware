#include <bits/stdc++.h>
using namespace std;
bool onlyAlphabets(string s)
{
    for (char ch : s)
        if (!isalpha(ch))
            return false;
    return true;
}

int main()
{
    // string s = "hfsufiu884958^^%jhjkdjk";
    string s = "namaste";
    cout<<onlyAlphabets(s);
    return 0;
}