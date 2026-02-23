#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    vector<int> arr = {2,3,3,2,1,2,6,5,6};

    set<int> ans;

    for(auto x : arr){
        ans.insert(x);
    }

    for(auto x: ans){
        cout<<x<<" ";
    }

    
}