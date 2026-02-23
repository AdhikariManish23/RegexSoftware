#include<bits/stdc++.h>
using namespace std;
// 1 approach   

//     int main(){
//         vector<int> arr = {0,1,2,3,5};
//         int n = arr.size();
        
//         int sum1 = 0;
//         for(int i = 0; i <= n; i++){
//             sum1 += i;
//         }
        
//         int sum2 = 0;
//         for(auto x : arr){
//             sum2 += x;
//         }
        
//         cout<<sum1-sum2;
// }

// 2 approach

    int main(){
        vector<int> arr = {0,1,2,3,5};
        int n = arr.size();
        
        int sum1 = n*(n+1)/2;
        
        int sum2 = 0;
        for(auto x : arr){
            sum2 += x;
        }
        
        cout<<sum1-sum2;
}