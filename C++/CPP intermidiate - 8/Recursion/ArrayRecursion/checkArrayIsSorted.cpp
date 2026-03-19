#include<bits/stdc++.h>
using namespace std;

// check if array is sorted or not return true or false Only

void checkSorted(vector<int>v, int i ){
        if(i > v.size()-1){
            cout<<"true";
            return ;
        }
        if(v[i] < v[i+1]){
            checkSorted(v,i+1);
        }
        else{
            cout<<"false";
            return;
        }
    }
    int main(){
        vector<int>v = {1,8,3,4};

        checkSorted(v,0);

     return 0;
}