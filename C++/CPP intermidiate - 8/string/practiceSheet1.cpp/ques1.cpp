#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    string s = "hello";
    
    int i = 0;
    int j = s.length()-1;

     while(i < j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    for(auto x: s){
        cout<<x<<" ";
    }
}