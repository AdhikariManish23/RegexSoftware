#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 3, 9, 2, 8, 1, 2};
    int largest = INT_MIN;
    int sLargest = INT_MIN;

    for (auto x : arr)
    {
        if (x > largest)
        {
            sLargest = largest;
            largest = x;
        }
        else if (x > sLargest && x < largest)
        {
            sLargest = x;
        }
    }
    if (sLargest == INT_MIN)
    {
        cout << "-1";
    }

    cout << sLargest;
}