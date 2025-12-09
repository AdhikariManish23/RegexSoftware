#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int num1 = 0;
    int num2 = 1;
    int nextNum;

    for (; n > 0; n--)
    {
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
        cout << nextNum << " ";
    }

    return 0;
}
