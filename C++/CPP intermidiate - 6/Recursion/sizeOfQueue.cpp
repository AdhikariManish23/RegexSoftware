#include<bits/stdc++.h>
using namespace std;
//  Return the size of Stack Using Recursion

    int sizeOfqueue(queue<int>q,int temp){
        if(q.empty()) return temp;
        temp++;
        q.pop();
        
        return sizeOfqueue(q,temp);
    }
    int main(){
        queue<int>q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);

        int temp = 0;
        cout<<sizeOfqueue(q,temp);

     return 0;
}