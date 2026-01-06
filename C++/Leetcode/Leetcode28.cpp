#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{

    int n = haystack.size();
    int m = needle.size();

    if (haystack == needle)
        return 0;

    for (int i = 0; i < n - m + 1; i++)
    {

        if (haystack.substr(i, m) == needle)
            return i;
    }
    return -1;
}

int main()
{
    string s = "wersadbsad";
    string st = "sad";

    cout << strStr(s, st);
}
