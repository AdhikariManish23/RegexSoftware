#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int> v = {5,1,2,4,8};
        int n = v.size();

        for(int i = 0;i < n-1; i++){
            int minIndex = i;
            for(int j = i+1; j < n; j++){
                if(v[j] < v[minIndex]){
                    minIndex = j;
                }
            }
            swap(v[i],v[minIndex]);
        }

        for(auto x : v){
            cout<<x<<" ";
        }
    
}