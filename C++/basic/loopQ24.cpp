#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Handle negative numbers
    if (n < 0)
        n = -n;

    int lastDigit = n % 10;

    // Find the first digit
    int firstDigit = n;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}
