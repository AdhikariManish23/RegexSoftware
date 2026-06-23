#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main (){
    int n = 10;
    int m = 20;
    
    swap(n,m);
    cout<<n;
    cout<<endl;
    cout<<m;
}