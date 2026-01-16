#include <bits/stdc++.h>
using namespace std;

// Find the minimum difference between the array

int main()
{
    vector<int> v = {12, 35, 26, 65, 87};

    sort(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    int minDiff = INT_MAX;

    for (int i = 1; i < v.size(); i++)
    {
        minDiff = min(minDiff, v[i] - v[i - 1]);
    }

    cout << minDiff;
}