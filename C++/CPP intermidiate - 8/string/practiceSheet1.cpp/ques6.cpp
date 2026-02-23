#include<bits/stdc++.h>
using namespace std;
    void countFreq(string s){
        map<char,int>m;
        for(char ch : s){
            m[ch]++;
        }
        for(auto x : m){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    int main(){
    
        string s = "hellohe";
        countFreq(s);
     return 0;
}