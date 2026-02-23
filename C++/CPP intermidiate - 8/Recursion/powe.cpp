#include<bits/stdc++.h>
using namespace std;
// Find power of a number (a^b) using recursion    
int power(int a,int b){
    if (b == 0){
        return 1;
    }
    return a*power(a,b-1);
}    
    int main(){
    int a = 2;
    int b = 4;

    cout<<power(a,b);
     return 0;
}