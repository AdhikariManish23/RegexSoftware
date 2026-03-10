#include <bits/stdc++.h>
using namespace std;
// Transpose Matrix it works on both square or rectangle matrix
int main() {

    // Declare matrix properly in C++
    vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6} };  // 2x3

    int row = matrix.size(); // 2
    int col = matrix[0].size(); // 3

    // Create transpose matrix
    vector<vector<int>> ans(col, vector<int>(row)); // 3x2

    // Transpose logic
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[j][i] = matrix[i][j];
        //  ans[0][0] = 1
        //  ans[1][0] = 2
        //  ans[2][0] = 3
        }
    }

    // Print transpose
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}