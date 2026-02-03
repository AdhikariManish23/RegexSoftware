#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "manish";
    
    int start = 0;
    int end = s.length()-1;
    
    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        start++;
        end--;
    }

    cout<<s;
}