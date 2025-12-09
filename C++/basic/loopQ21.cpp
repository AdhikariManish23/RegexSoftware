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

    int count = 0;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 8)
            count++;
        n /= 10;
    }

    cout << "Total count of digit 8 is: " << count << endl;

    return 0;
}
