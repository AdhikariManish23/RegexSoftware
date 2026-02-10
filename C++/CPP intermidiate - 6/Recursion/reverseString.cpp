#include<bits/stdc++.h>
using namespace std;
void reverse(string& st ,int i, int j ){
    if(i > j){  
        return ;
    }

    swap(st[i],st[j]);

    reverse(st, i+1,j-1);
}
    
    int main(){
        string s  = "hello";
        int i = 0;
        int j = s.length()-1;
        reverse(s,i,j);

        for(char ch : s){
            cout<<ch;
        }
}