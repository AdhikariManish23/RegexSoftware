#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Handle negative numbers
    if (n < 0)
    {
        n = -n;
    }

    int largest = 0;

    while (n > 0)
    {
        int digit = n % 10; // extract last digit
        if (digit > largest)
        {
            largest = digit; // update largest
        }
        n /= 10; // remove last digit
    }

    cout << "Largest digit is: " << largest;

    return 0;
}
