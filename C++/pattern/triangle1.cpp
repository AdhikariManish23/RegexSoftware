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
    // int m = 3;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j >= 3 - i && j <= 3)
            {
                // cout << m;
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        // m--;
        cout << endl;
    }
}