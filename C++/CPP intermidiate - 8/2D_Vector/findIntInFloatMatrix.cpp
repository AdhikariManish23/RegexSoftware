#include<bits/stdc++.h>
using namespace std;
    // find int value in the Float matrix
    int main(){
        vector<vector<float>> v = {{3.4,9.6,3.8}, {6.1,3.2,3.3},{2.1,1.2,5.6},{6.4,13,13.2}};
        int row = v.size();
        int col = v[0].size();

        for(int i =0; i< row; i++){
            for(int j = 0; j< col; j++){
                int store = v[i][j];  // This converts float → int
                if(store == v[i][j]){
                    cout<<i<<" "<<j;
                }
            }
        }
}