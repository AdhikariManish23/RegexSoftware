#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<vector<float>> v = {{3.4,9.6,3.8}, {6.1,3.2,3.3},{2.1,1.2,5.6},{6.4,13,13.2}};
        int row = v.size();
        int col = v[0].size();

        for(int i =0; i< row; i++){
            for(int j = 0; j< col; j++){
                int store = v[i][j];  // here it converts the float value into int example f = 12.2 , i = 12
                if(store == v[i][j]){
                    cout<<i<<" "<<j;
                }
            }
        }
}