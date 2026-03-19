#include<bits/stdc++.h>
using namespace std;
    void sum(vector<int>v, int i , int s){
        if(i > v.size()-1){
            cout<<s;
            return;
        }
        s +=v[i];
        sum(v,i+1,s);

    }
    int main(){
        vector<int>v = {1,2,3,4};

        sum(v,0,0);

     return 0;
}