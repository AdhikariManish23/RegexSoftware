#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int original = number;

    // ----- Using while loop -----
    int num1 = number;
    int reversed1 = 0;

    while (num1 != 0)
    {
        int digit = num1 % 10;
        reversed1 = reversed1 * 10 + digit;
        num1 /= 10;
    }

    if (original == reversed1)
        cout << "Palindrome (using while loop)" << endl;
    else
        cout << "Not a palindrome (using while loop)" << endl;

    // ----- Using do-while loop -----
    int num2 = number;
    int reversed2 = 0;

    do
    {
        int digit = num2 % 10;
        reversed2 = reversed2 * 10 + digit;
        num2 /= 10;
    } while (num2 != 0);

    if (original == reversed2)
        cout << "Palindrome (using do-while loop)" << endl;
    else
        cout << "Not a palindrome (using do-while loop)" << endl;

    return 0;
}
