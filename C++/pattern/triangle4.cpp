#include <bits/stdc++.h>
using namespace std;
/*

 *
 **
 ***
 ****

 */

int main()
{

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j >= 0 && j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}