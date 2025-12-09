#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    // ----------- Using WHILE loop -----------
    int temp1 = n; // store original value
    int fact1 = 1;

    while (temp1 >= 1)
    {
        fact1 = fact1 * temp1;
        temp1--;
    }

    cout << "Factorial using while loop is: " << fact1 << endl;

    // ----------- Using DO-WHILE loop -----------
    int temp2 = n; // store original value again
    int fact2 = 1;

    if (temp2 == 0)
    {
        fact2 = 1; // special case for 0!
    }
    else
    {
        do
        {
            fact2 = fact2 * temp2;
            temp2--;
        } while (temp2 >= 1);
    }

    cout << "Factorial using do-while loop is: " << fact2 << endl;

    return 0;
}
