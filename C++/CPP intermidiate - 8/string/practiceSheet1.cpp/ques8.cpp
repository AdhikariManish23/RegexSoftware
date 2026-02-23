#include <bits/stdc++.h>
using namespace std;
bool areEqual(string a, string b)
{
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main()
{
    string s1 = "papita";
    string s2 = "savita";

    cout<<areEqual(s1,s2);
    return 0;
}