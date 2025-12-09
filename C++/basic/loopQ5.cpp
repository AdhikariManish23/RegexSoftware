#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Using while loop
    int num1 = number;
    int count1 = 0;
    while (num1 != 0)
    {
        num1 /= 10; // remove last digit
        count1++;
    }
    cout << "Number of digits (using while loop): " << count1 << endl;

    // Using do-while loop
    int num2 = number;
    int count2 = 0;
    do
    {
        num2 /= 10; // remove last digit
        count2++;
    } while (num2 != 0);
    cout << "Number of digits (using do-while loop): " << count2 << endl;

    return 0;
}
