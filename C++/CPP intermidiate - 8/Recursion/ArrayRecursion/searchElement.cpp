#include<bits/stdc++.h>
using namespace std;
// return True if you finda element else false

    void searchEl(vector<int>v, int i , int target,int count){
        
        if(i > v.size()-1){
            if(count == 1){
                cout<<"true";
                return;
            }
            else{
                cout<<"false";
                return;
            }
        }
        if(target == v[i]){
            count = 1;
            searchEl(v,i+1,target,count);
        }
        else{
            searchEl(v,i+1,target,count);
        }
    }
    int main(){
        vector<int>v = {5,2,9,0,1};
        int target = 6;
        int count =0;
        searchEl(v,0,target,count );

     return 0;
}