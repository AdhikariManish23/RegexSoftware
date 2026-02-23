#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        queue<int>q;
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(1);
    

    vector<int>v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    
    vector<int> v2 = v;
    reverse(v2.begin(), v2.end());
    if(v2 == v){
        cout<<"pallindrome";
    }
    else{
        cout<<"not a pallindrome";
    }
}