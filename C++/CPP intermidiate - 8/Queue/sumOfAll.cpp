#include<bits/stdc++.h>
using namespace std;
    
    int main(){
       queue<int>q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);

        int ans = 0;
        while(!q.empty()){
            ans+=q.front();
            q.pop();
        }
        cout<<ans;

     return 0;
}