#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {23,54,76,87,98,12};

    int smallest = INT_MAX;

    for (auto x : arr) {
        smallest = min(smallest, x);
    }

    cout << smallest;
}
