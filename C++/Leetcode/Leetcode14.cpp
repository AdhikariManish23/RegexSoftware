
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s = {"flower","flow","flight"};
    sort(s.begin(), s.end());

    string left = s[0];
    string right = s[s.size() - 1];

    int i = 0;
    while (i < left.size() && i < right.size()) {
        if (left[i] == right[i]) {
            i++;
        } else {
            break;
        }
    }

    cout << left.substr(0, i);
}
