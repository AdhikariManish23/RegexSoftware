#include<bits/stdc++.h>
using namespace std;
 int count(int n){
    if(n == 0){
        return 0;
    }
    return 1 + count(n/10);
 }   
    int main(){
    int n;
    cout<<"enter the value \n";
    cin>>n;
    

    if(n < 0){
        n = -(n);
    }
    if(n < 10){
        cout<<1;
    }
    else{
        cout<<count(n);
    }
     return 0;
}