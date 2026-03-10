#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // 1. Reverse column
    
    // int row = matrix.size();
    // int col = matrix[0].size();

    // for(int i=0; i < row; i++){
    //     reverse(matrix[i].begin(),matrix[i].end());
    // }


    // 2. Reverse Row

    for(int i = 0; i <matrix.size(); i++ ){
        reverse(matrix.begin(),matrix.end());
    }

    for(auto x : matrix){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}