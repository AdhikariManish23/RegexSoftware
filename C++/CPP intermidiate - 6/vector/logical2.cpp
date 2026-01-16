#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int>v = {1,2,3,4,5};
        
        int i = 0;
        int j = v.size()-1;
        
        while(i < j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        
        for(auto x : v){
            cout<<x<<" ";
        }
}