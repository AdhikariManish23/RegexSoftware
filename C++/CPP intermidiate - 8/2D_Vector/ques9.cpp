#include<bits/stdc++.h>
using namespace std;
    // “Given a 2D array (matrix), find the maximum sum among all rows.”
    int main(){
        vector<vector<int>>v = {{1,2,3},{4,5,6},{5,10,8}};

        int row = v.size();
        int col = v[0].size();

        vector<int> store;
        for(int i = 0; i< row; i++){
            int ans = 0;
            for(int j = 0; j<col; j++){
                ans += v[i][j];
            }
            store.push_back(ans);
        }

        int result = INT_MIN;
        for(auto x : store){
            cout<<x<<" ";
            result = max(result,x);
        }
        cout<<endl;
        cout<<result;

     
}