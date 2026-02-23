// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v = {'a', 'a', 'b', 'c', 'd', 'c','c'};

    map<char, int> m;
    for (auto x : v)
    {
        m[x]++;
    }

    for (auto x : m)
    {
        cout << x.first << " --> " << x.second << endl;
    }
}

// Unordered_map

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int>v = {1,1,2,2,2,3,4,4};

//     unordered_map<int,int> m;
//     for(auto x : v){
//         m[x]++;
//     }

//     for(auto x: m){
//         cout<<x.first<<" --> "<<x.second<<endl;
//     }
// }