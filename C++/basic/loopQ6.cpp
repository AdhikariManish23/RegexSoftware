#include <iostream>
using namespace std;
// Not handle all  the edge cases
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Using while loop
    int num1 = number;
    int reversed1 = 0;
    while (num1 != 0)
    {
        int digit = num1 % 10;              // get last digit
        reversed1 = reversed1 * 10 + digit; // append digit
        num1 /= 10;                         // remove last digit
    }

    cout << "Reversed number (while loop): " << reversed1 << endl;

    // Using do-while loop
    int num2 = number;
    int reversed2 = 0;
    do
    {
        int digit = num2 % 10;
        reversed2 = reversed2 * 10 + digit;
        num2 /= 10;
    } while (num2 != 0);

    cout << "Reversed number (do-while loop): " << reversed2 << endl;

    return 0;
}
