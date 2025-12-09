#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;

    // -------- Using WHILE loop --------
    int sum1 = 0;
    int num1 = n;
    while (num1 != 0)
    {
        sum1 += num1 % 10;
        num1 /= 10;
    }
    cout << "Sum of digits using while loop: " << sum1 << endl;

    // -------- Using DO-WHILE loop --------
    int sum2 = 0;
    int num2 = n;
    do
    {
        sum2 += num2 % 10;
        num2 /= 10;
    } while (num2 != 0);

    cout << "Sum of digits using do-while loop: " << sum2 << endl;

    return 0;
}
