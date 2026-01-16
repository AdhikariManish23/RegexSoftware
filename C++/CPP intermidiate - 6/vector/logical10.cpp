#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {3,4,5,6};

    set<int> ans;
    for(auto x : v1){
        ans.insert(x);
    }
    
    for(auto x : v2){
        ans.insert(x);
    }

    for(auto x : ans){
        cout<<x<<" ";
    }

}