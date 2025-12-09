#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the second number: ";
    cin >> n;

    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }

    cout << "HCF is : " << m << endl;

    return 0;
}
