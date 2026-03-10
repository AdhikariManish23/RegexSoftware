#include<bits/stdc++.h>
using namespace std;
    // Find the maximum in each row
    int main(){
        vector<vector<int>>v = {{1,2,3},{4,5,6},{5,10,8}};
        //                          
        int row = v.size();
        int col = v[0].size();

        for(int i = 0; i< row; i++){
            int ans= INT_MIN;
            for(int j = 0; j<col; j++){
                ans = max(v[i][j],ans);
            }
            cout<<ans<<" ";
        }
     
}