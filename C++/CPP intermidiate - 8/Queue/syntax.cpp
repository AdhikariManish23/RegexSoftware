#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        // queue<int>q;
        // q.push(1);
        // q.push(2);
        // q.pop();
        // cout<<q.front()<<endl;
        // q.push(4);
        // cout<<q.back()<<endl;
        // cout<<q.size()<<endl;
        // cout<<q.empty()<<endl;

// take 5 input and push in Queue after that print 
  queue<int> q;
    int n = 5;

    for(int i = 0; i < n; i++){
        int j;
        cout << "enter :";
        cin >> j;
        q.push(j);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
     return 0;
}