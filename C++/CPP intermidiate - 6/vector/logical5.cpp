#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={0,0,9,2,0,8};
    int n = nums.size();
    int i = 0;
    int j = 0;
    while(i < n){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
        i++;
    }

    for(auto x : nums){
        cout<<x<<" ";
    }
}