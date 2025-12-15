#include <bits/stdc++.h>
using namespace std;
int main()
{
    // By giving n = 2 you create hai matrix (4*2) 
    int n = 4; 
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<= n*2; j++){
            if(j >= n-i && j <= n+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
