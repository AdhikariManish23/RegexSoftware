#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v,int i){
    if(i > v.size()-1){
        return;
    }
    cout<<v[i]<<" ";
    print(v,i+1);
}    
    int main(){
    vector<int>v = {3,4,6,8,9};
    print(v,0);

     return 0;
}