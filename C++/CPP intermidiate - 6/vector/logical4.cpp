#include<bits/stdc++.h>
using namespace std;
    // The majority element is the element that appears more than ⌊n / 2⌋ times.
    int main(){
        vector<int>ans = {2,2,1,1,1,2,2,3,2};
        sort(ans.begin(),ans.end());

        cout<<ans[ans.size()/2];
}