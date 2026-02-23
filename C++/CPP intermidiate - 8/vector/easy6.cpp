#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 6, -4, 21, -54, 43};
    int positive = 0;
    int negative = 0;

    for (auto x : v)
    {
        if (x >= 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    cout << positive << endl;
    cout << negative << endl;
}