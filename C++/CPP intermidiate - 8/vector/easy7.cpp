#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int>v  = {34,23,54,12,87,10};
        vector<int> ans;

        for(int i = v.size()-1; i >= 0; i--){
            ans.push_back(v[i]);
        }

        for(auto x : ans){
            cout<<x<<" ";
        }

}