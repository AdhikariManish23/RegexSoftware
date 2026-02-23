#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "abcabcc"; // false
    string s = "abbacc"; // true
    string s2 = "aabbccc"; // false
    
    stack <char> st;
    
    for(char ch : s){
        if(!st.empty() && st.top() == ch){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    
    if(st.empty()){
        cout<<true;
    }
    else{
        cout<<false;
    }
}