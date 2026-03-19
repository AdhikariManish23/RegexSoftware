#include <bits/stdc++.h>
using namespace std;
void isPallindrome(int num1, int &reverse)
{
    if (num1 == 0)
    {
        return ;
    }
    int rem = num1 % 10;
    reverse = (reverse * 10) + rem;
    return isPallindrome(num1 / 10, reverse);
}

int main()
{
    int num1 = 1213;
    int reverse = 0;

    isPallindrome(num1, reverse);
    if (num1 == reverse)
    {
        cout << "Pallindrome";
    }
    else
    {
        cout << "not a pallindrome";
    }
    return 0;
}