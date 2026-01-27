#include<bits/stdc++.h>
using namespace std;
    // this code will work on Square Matrix only
    int main(){
    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
        int row = v.size();
        int col =v[0].size();
        cout<<"Matrix Before Transpse \n";
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i = 0; i < row; i++){
    for(int j = i + 1; j < col; j++){
        swap(v[i][j], v[j][i]);
    }
}


        cout<<endl;
        
        cout<<"After transpose \n";
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }

}