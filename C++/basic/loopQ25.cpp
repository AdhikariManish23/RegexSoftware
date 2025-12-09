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

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;

    // For loop from 1 to first digit
    cout << "For loop from 1 to first digit: ";
    for (int i = 1; i <= firstDigit; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Do-while loop from last digit to 0
    cout << "Do-while loop from last digit to 0: ";
    int j = lastDigit;
    do
    {
        cout << j << " ";
        j--;
    } while (j >= 0);
    cout << endl;

    return 0;
}
