#include <iostream>
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
        if (i % 2 == 0)
        {
            sum1 += i;
        }
    }
    cout << "\nSum of even numbers using for loop = " << sum1;

    // Using while loop
    int sum2 = 0;
    int i = 1;
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum2 += i;
        }
        i++;
    }
    cout << "\nSum of even numbers using while loop = " << sum2;

    // Using do-while loop
    int sum3 = 0;
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            sum3 += i;
        }
        i++;
    } while (i <= N);
    cout << "\nSum of even numbers using do-while loop = " << sum3;

    return 0;
}
