#include <bits/stdc++.h>
using namespace std;
// 1 Approach
int main()
{
    vector<int> arr = {5, -6, 3, -9, 2, 4};

    sort(arr.begin(), arr.end());
    int ans1 = arr[0] * arr[1];
    int ans2 = arr[arr.size() - 1] * arr[arr.size() - 2];

    cout << max(ans1, ans2);
}

// 2 Approach

// int main(){
//         vector<int> arr = {1,9,3,7,5};
//         int ans = 0;

//         for(int i = 0 ; i < arr.size(); i++){
//             for(int j = i+1; j < arr.size(); j++){
//                 if(arr[i] * arr[j] > ans){
//                     ans  = arr[i]*arr[j];
//                 }
//             }
//         }

//         cout<<"The Maximum product is : "<<ans;

//      return 0;
// }