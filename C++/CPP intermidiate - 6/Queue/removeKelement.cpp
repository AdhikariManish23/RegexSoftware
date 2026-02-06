#include<bits/stdc++.h>
using namespace std;
    // remove first k element of Queue
    int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    int k = 3;
    while(k!=0){
        q.pop();
        k--;
    }

    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }

     return 0;
}