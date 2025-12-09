#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    // Using for loop
    int sum1 = 0;
    for (int i = 1; i <= N; i++)
    {
        sum1 += i;
    }
    cout << "\nSum using for loop = " << sum1;

    // Using while loop
    int sum2 = 0;
    int i = 1;
    while (i <= N)
    {
        sum2 += i;
        i++;
    }
    cout << "\nSum using while loop = " << sum2;

    // Using do-while loop
    int sum3 = 0;
    i = 1; // we already declare the i above so we just reset the value
    do
    {
        sum3 += i;
        i++;
    } while (i <= N);
    cout << "\nSum using do-while loop = " << sum3;

    return 0;
}
