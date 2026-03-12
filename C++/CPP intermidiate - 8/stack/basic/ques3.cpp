#include<bits/stdc++.h>
using namespace std;
    /* 
    string s1 = "abx#d"    string contains small alphabets and '#'
    string s2 = "fgh#l"
 
    string contains small alphabets
    when '#' occurs remove all staack values
    if(s1.size == s2.size() ) print true
    else print false
 
    */ 
    int main(){
    string s1 = "ab#c";
    string s2 = "ad#d";

    stack<char>st1;
    stack<char>st2;

    for(auto x : s1){
        if(x != '#'){
            st1.push(x);
        }
        else{
            while(!st1.empty()){
                st1.pop();
            }
        }
    }
    
    for(auto x : s2){
        if(x != '#'){
            st2.push(x);
        }
        else{
            while(!st2.empty()){
                st2.pop();
            }
        }
    }
    
    if(st1.size() == st2.size()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}