#include<bits/stdc++.h>
using namespace std;
    // Diagonal Sum
    int main(){
        vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};

        int row = v.size();
        int col = v[0].size();

        int sum = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == j){
                    sum += v[i][j];
                }
            }
        }

        cout<<"Diagonal Sum : "<<sum;

     return 0;
}