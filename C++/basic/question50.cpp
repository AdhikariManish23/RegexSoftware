#include <iostream>
using namespace std;

int main()
{
    // Use multiple 'if\/ when all conditions must be checked
    // Use 'else if' when only one condition should run
    int a, b, c, d, e;

    cout << "Enter 5 integers:\n";
    cin >> a >> b >> c >> d >> e;

    int smallest = a; // assume first number is smallest

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    if (d < smallest)
        smallest = d;
    if (e < smallest)
        smallest = e;

    cout << "Smallest number is: " << smallest;

    return 0;
}
