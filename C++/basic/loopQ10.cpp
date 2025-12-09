#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // ---------- Using FOR loop ----------
    cout << "Divisors using for loop: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    // ---------- Using WHILE loop ----------
    cout << "\nDivisors using while loop: ";
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            cout << i << " ";
        i++;
    }

    // ---------- Using DO-WHILE loop ----------
    cout << "\nDivisors using do-while loop: ";
    i = 1;
    do
    {
        if (n % i == 0)
            cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}
