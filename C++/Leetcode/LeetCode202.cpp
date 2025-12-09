#include <iostream>
using namespace std;

int SSD(int n)
{
    // It will give you the Sum Square of the digit
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool HappyNumber(int n)
{

    while (n > 4)
    { // Why 4 ? because when there is continuosly looping is going on at some time 4 will come so whenever we get 4 break the loop
        n = SSD(n);
        cout << n << "\n"; // we printing this to check the next sum
    }
    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int ans = HappyNumber(n);
    cout << "\nHappy number is : " << ans;
}