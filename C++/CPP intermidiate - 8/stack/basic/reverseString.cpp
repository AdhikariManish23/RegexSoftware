#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        string s = "Hello";
        stack<char> ch;

        for(auto x : s){
            ch.push(x);
        }

    // 1. it print the stack
        // while(!ch.empty()){
        //     cout<<ch.top()<<" ";
        //     ch.pop();
        // }

    // 2. now actual changes in String s   
    int i = 0;    
    while(!ch.empty()){
            s[i] = ch.top();
            i++;
            ch.pop();
        }

    cout<<s;

     return 0;
}