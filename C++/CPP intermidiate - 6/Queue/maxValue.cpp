#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        queue<int>q;
        q.push(1);
        q.push(5);
        q.push(3);
        q.push(4);
        
        int ans = INT_MIN;

        while(!q.empty()){
            ans = max(q.front(),ans);
            q.pop();
        }
        cout<<ans;
     return 0;
}