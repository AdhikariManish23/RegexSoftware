#include<bits/stdc++.h>
using namespace std;

    //  Using auto to print 2D Array
    
    int main(){
        vector<vector<int>> v = {{1,2,3}, {4,5,6},{7,8,9}};

        for(auto x : v){
            for(auto y : x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
