#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {11, 12, 31, 61, 17, 18};
    vector<int> store;

    for (auto x : arr)
    {
        store.push_back(x);
    }


    cout<<"Stored array : ";

    for (auto x : store)
    {

        cout << x << " ";
    }
}