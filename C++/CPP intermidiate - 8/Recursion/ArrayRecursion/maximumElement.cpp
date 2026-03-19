#include<bits/stdc++.h>
using namespace std;
    void findMax(vector<int>v, int i , int max){
        if(i > v.size()-1){
            cout<<max;
            return;
        }
        if(v[i] > max){
            max = v[i];
        }
        findMax(v,i+1,max);
    }
    int main(){
        vector<int>v = {23,54,87,12};
        int max = INT_MIN;
        findMax(v,0,max);

     return 0;
}