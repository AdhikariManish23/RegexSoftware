#include <bits/stdc++.h>
using namespace std;
// find a target string in the 2D array (checking row wise)

bool rowWiseCheck(vector<vector<char>> v,string target){
        int row = v.size();
        int col = v[0].size();
    
    for(int i = 0; i < row; i++){
        string s = "";
        for(int j = 0; j < col; j++){
            s += v[i][j];
        }
        if(s == target){
            return true;
        }
    }
    return false;
}

// if the target is present in col wise 
bool colWiseCheck(vector<vector<char>> v,string target){
        int row = v.size();
        int col = v[0].size();
    
    for(int i = 0; i < row; i++){
        string s = "";
        for(int j = 0; j < col; j++){
            s += v[j][i];
        }
        if(s == target){
            return true;
        }
    }
    return false;
}

int main() {
    // Write C++ code here
    vector<vector<char>> v = {{'r','a','h','l'},{'k','e','j','r'},{'m','o','d','i'},{'s','o','n','i'}};
    
    string target = "modi";
    
    // row wise
    bool ans = rowWiseCheck(v,target);
    cout<<ans;
    cout<<endl;
    // col wise

    string target2 = "hjdt"; // not present column wise in our 2D vector

    bool ans2 = colWiseCheck(v,target2);
    cout<<ans2;
    
}