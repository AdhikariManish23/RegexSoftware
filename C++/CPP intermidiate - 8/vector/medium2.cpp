#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 3, 9, 2, 8, 12, 14};
    int Smallest = INT_MAX;
    int sSmallest = INT_MAX;

    for (auto x : arr)
    {
        if (x < Smallest)
        {
            sSmallest = Smallest;
            Smallest = x;
        }
        else if (x < sSmallest && x > Smallest)
        {
            sSmallest = x;
        }
    }
    if (sSmallest == INT_MAX)
    {
        cout << "-1";
    }

    cout << sSmallest;
}