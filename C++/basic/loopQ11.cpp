#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Not a prime number";
    }
    else
    {
        bool isPrime = true;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << "Prime number";
        else
            cout << "Not a prime number";
    }

    return 0;
}
