#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0, last, temp = n;
    while (n)
    {
        last = n % 10;
        if (temp % last == 0)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main()
{

    int n;
    cout << "Entert the number : ";
    cin >> n;

    int ans = countDigit(n);
    cout << "Count is : " << ans;
}
