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

    int smallest = n % 10; // start with the last digit

    do
    {
        int digit = n % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        n /= 10;
    } while (n > 0);

    cout << "Smallest digit is: " << smallest;

    return 0;
}
