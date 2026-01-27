#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<vector<int>>v = {{1,2,3},{4,5,6},{5,10,8}};

        int row = v.size();
        int col = v[0].size();

        for(int i = 0; i< row; i++){
            int sum = 0;
            for(int j = 0; j<col; j++){
                sum+=v[i][j];
            }
            cout<<sum<<" ";
        }
     
}