#include<bits/stdc++.h>
using namespace std;

// Question : Reverse a Number 123

int main(){
    int num = 123;
    
    stack<int> s;
    int rem = 0;
    while(num > 0){
        int temp = num % 10;
        rem = (rem*10) + temp;
        num /=10;
    }

    cout<<rem;

    while(num > 0){
        s.push(num % 10);
        num = num / 10;
    }


    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
   
    return 0;
}