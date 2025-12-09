#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int m;
    cout << "Enter another number : ";
    cin >> m;

    int p = 1;
    int i = 1;
    while (i <= m)
    {
        p = p * n;
        i++;
    }

    cout << p;
}