#include<bits/stdc++.h>
using namespace std;
    void print(vector<int> v, int i){
        if(i < 0) return ;
        cout<<v[i];
        print(v,i-1);
    }
    int main(){
    vector<int>v  = {1,2,3,4};
    print(v,v.size()-1);

     return 0;
}