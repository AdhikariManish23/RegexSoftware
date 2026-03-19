#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aaaabbcccd";
    // Output will be a4b2c3d1
    map<char,int> mp;

    for(char c : s){
        mp[c]++;
    }

    string ans = "";

    for(auto x : mp){
        ans += x.first;               // add character
        ans += to_string(x.second);   // add count
    }

    cout << ans;
}