#include<bits/stdc++.h>
using namespace std;
    //  Reversing The Integer 
    int main(){
        queue<int>q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);

        // 1. reverse using stack
        
        // stack<int>st;
        // while(!q.empty()){
        //     st.push(q.front());
        //     q.pop();
        // }

        // while(!st.empty()){
        //     cout<<st.top();
        //     st.pop();
        // }

        // 2. reverse using vector

        vector<int>v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }

        reverse(v.begin(),v.end());

        for(auto x : v){
            cout<<x<<" ";
        }
     return 0;
}