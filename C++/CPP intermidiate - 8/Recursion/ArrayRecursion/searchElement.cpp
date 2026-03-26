#include<bits/stdc++.h>
using namespace std;
// return True if you finda element else false

// Optimised Approach

    void searchEl(vector<int>v, int i, int target){
        if(i > v.size()-1){
            cout<<"false";
            return;
        }
        if(target == v[i]){
            cout<<"true";
            return;
        }
        else{
            searchEl(v,i+1,target);
        }
    }


    int main(){
        vector<int>v = {5,7,9,0,6};
        int target = 6;
        int i =0;
        searchEl(v,i,target );

     return 0;
}