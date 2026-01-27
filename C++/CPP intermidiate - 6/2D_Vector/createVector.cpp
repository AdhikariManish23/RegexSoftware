#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        // vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
        vector<vector<int>> v = {{1,2,3,12,14},{4,5,6,15,11},{7,8,9,19,18}};

        int col = v[0].size();
        cout<<col<<endl;
        int row = v.size();
        cout<<row<<endl;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
}