#include <bits/stdc++.h>
//  This question asks you to identify common elements present in both arrays.
using namespace std;

// Approach 1;

/*⚠ -- Your logic checks:
“Appears more than once in total”
But intersection means:
“Appears at least once in BOTH arrays”
These are not the same thing.
*/

// int main()
// {
//     vector<int> v1 = {1,2,3,4};    // v1 = {1,1,2,3}
//     vector<int> v2 = {3,4,5,6};    // v2 = {4,5,6};  in this case code is wrong

//     map<int,int> ans;

//     for(auto x : v1){
//         ans[x]++;
//     }
//     for(auto x : v2){
//         ans[x]++;
//     }

//     for(auto x : ans){
//         if(x.second > 1){
//             cout<<x.first<<" ";
//         }
//     }

// }

// Appraoch 2

int main()
{
    vector<int> v1 = {1,1,3,4};
    vector<int> v2 = {3,3,4,5,6};

    map<int,int> freq;

    // mark presence in first array
    for(auto x : v1){
        freq[x] = 1; // 1 -- 1
    }

    // check presence in second array
    for(auto x : v2){
        if(freq[x] == 1){
            cout << x << " ";
            freq[x] = 0; // avoid duplicates
        }
    }
}