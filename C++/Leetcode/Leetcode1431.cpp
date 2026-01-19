#include <bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> res;
    int largest = 0;
    for (auto x : candies)
    {
        largest = max(x, largest);
    }

    for (auto x : candies)
    {
        if (x + extraCandies >= largest)
        {
            res.push_back(true);
        }
        else
        {
            res.push_back(false);
        }
    }

    return res;
}

int main()
{
    vector<int> v = {2, 1, 3, 5};

    int extraCandies = 3;

    vector<bool> ans = kidsWithCandies(v, extraCandies);

    for (auto x : ans)
{
    if (x)
        cout << "true ";
    else
        cout << "false ";
}

}