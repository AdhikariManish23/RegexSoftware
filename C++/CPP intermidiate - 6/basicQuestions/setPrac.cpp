// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int>s;
    
    for(int i = 1; i<= 3; i++){
        int value;
        cout<<"Enter value ";
        cin>>value;
        
        s.insert(value);
    }
    
    for(auto x : s){
        cout<<x<<" ";
    }
}