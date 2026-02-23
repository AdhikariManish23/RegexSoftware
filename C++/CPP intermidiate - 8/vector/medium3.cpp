#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    
        vector<int>v = {2,2,3,4,5,3,4,1,1,5,3,4};

        map<int,int>m;

        for(auto x : v){
            m[x]++;
        }

        for(auto x : m){
            cout<<x.first<<" --> "<<x.second<<endl;
        }
}