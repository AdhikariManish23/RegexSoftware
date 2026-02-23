#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int> v = {9,3,2,3,6,9,7};
        map<int,int> m;
        for(auto x : v){
            m[x]++;
        }

        for(auto x : m){
            if(x.second == 1){
                cout<<x.first<<" ";
            }
        }
}