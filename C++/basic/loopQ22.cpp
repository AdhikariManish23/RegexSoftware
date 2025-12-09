#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // 2401 / 343 / 49 / 7
    cout << "Enter the number : ";
    cin >> n;

    while (n % 7 == 0)
    {
        n /= 7;
    }
    if (n == 1)
    {
        cout << "power of 7 ";
    }
    else
    {
        cout << "not power of 7 ";
    }
}