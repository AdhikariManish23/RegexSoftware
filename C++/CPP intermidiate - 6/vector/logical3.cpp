#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] != v[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    vector<int> v = {1, 2, 3, 2, 1};
    if (isPalindrome(v))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
