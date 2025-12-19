#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr)
{
    for (auto ch : arr)
    {
        cout << ch << " ";
    }
}

bool linearSearch(vector<int> arr, int key)
{
    for (auto ch : arr)
    {
        if (ch == key)
        {
            return true;
        }
    }
    return false;
}

vector<int> removeDuplicates(vector<int> arr)
{
    vector<int> ans;
    for (auto ch : arr)
    {
        if (!linearSearch(ans, ch))
        {
            ans.push_back(ch);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 4, 4, 4, 3, 7, 8, 9, 9};
    vector<int> ans = removeDuplicates(arr);
    printVector(ans);
}