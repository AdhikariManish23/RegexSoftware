#include<bits/stdc++.h>
using namespace std;

// OPRIMISED code (set matrix Zero)

void printing(vector<vector<int>>& v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> v = {{0,2,0},{4,5,6},{7,8,9}};

    int row = v.size();
    int col = v[0].size();

    vector<int> rowMark(row, 0);
    vector<int> colMark(col, 0);

    // First pass: mark rows and columns
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(v[i][j] == 0){
                rowMark[i] = 1;
                colMark[j] = 1;
            }
        }
    }

    // Second pass: set zeroes
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(rowMark[i] == 1 || colMark[j] == 1){
                v[i][j] = 0;
            }
        }
    }

    printing(v);
}




// Brute Force Approach  (SET matrix Zero)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<vector<int>>v={{1,2,3},{4,0,6},{7,8,9}};
    

//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             if(v[i][j]==0){
//                 int x=i;
//                 int y=j;
//                 x--;
//                 v[x][j]=-1;
                
//                 y++;
//                 v[i][y]=-1;
                
//                 x=x+2;
//                 v[x][j]=-1;
                
//                 y=y-2;
//                 v[i][y]=-1;
//             }
//         }
//     }
//      for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             if(v[i][j]==-1){
//                v[i][j]=0;
//             }
//         }
//     }
//      for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }