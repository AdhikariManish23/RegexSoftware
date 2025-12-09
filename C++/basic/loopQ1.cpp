#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    // Using for loop
    cout << "\nUsing for loop:\n";
    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
    }

    // Using while loop
    cout << "\nUsing while loop:\n";
    int i = 1;
    while (i <= N)
    {
        cout << i << " ";
        i++;
    }

    // Using do-while loop
    cout << "\nUsing do-while loop:\n";
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= N);

    return 0;
}
