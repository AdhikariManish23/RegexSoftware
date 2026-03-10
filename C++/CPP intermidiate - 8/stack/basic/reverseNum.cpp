#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        int num =123;

        stack<int>s;

        while(num>0){
            s.push(num%10);
            num = num/10;
        }

        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }

     return 0;
}