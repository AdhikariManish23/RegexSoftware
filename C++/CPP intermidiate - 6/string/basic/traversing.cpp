#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        string s = "hello";
        for(auto x : s){
            cout<<x;
        }
        cout<<endl;

        // 1st method to copy
        // string duplicate = s;
        // for(auto x : duplicate){
        //     cout<<x;
        // }

        // 2nd method to copy 
        string duplicate;
        for(auto x : s){
            duplicate+=x;
        }
        for(auto x : duplicate){
            cout<<x;
        }
}