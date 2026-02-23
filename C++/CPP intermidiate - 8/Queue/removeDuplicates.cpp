#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(3);
    q.push(5);

    set<int>s;

    while(!q.empty()){
        s.insert(q.front());
        q.pop();
    }

    vector<int> v;
    for(auto x : s){
        v.push_back(x);
    }

    for(auto x : v){
        cout<<x<<" ";
    }
     return 0;
}