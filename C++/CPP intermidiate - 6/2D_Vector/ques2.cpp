#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        // vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}}; // Q1 find target
        vector<vector<int>>v = {{6,1,2},{3,6,4},{9,6,0}};  // Q2 find last occurence of target

        int row  = v.size();
        int col = v[0].size();

        int target = 6;
        // Q1
        // for(int i = 0; i< row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(v[i][j] == target){
        //             cout<<i<<","<<j;
        //         }
        //     }
        // }

        // Q2  Approach 1
        // int k = -1;
        // int l = -1;
        // for(int i = 0; i< row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(v[i][j] == target){
        //             k = i;
        //             l = j;
        //         }
        //     }
        // }

        // cout<<k<<" "<<l;

        // Approach 2
        for(int i = row-1 ; i >= 0; i--){
            for(int j = col-1; j >= 0; j--){
                if(v[i][j] == target){
                    cout<<i<<" "<<j;
                    return 0;
                }
            }
        }
}