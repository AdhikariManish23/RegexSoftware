#include <iostream>
using namespace std;

int main()
{
    int N, A, B;

    cout << "Enter value of N(range): ";
    cin >> N;

    cout << "Enter value of A: ";
    cin >> A;

    cout << "Enter value of B: ";
    cin >> B;

    cout << "Numbers divisible by " << A << " and " << B << " between 1 and " << N << ":\n";

    for (int i = 1; i <= N; i++)
    {
        if (i % A == 0 && i % B == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
