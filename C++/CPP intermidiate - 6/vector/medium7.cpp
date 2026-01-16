#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int> arr = {23,54,11,67,45,33,4};

        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++){
                if(arr[i] < arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }

        for(auto x : arr){
            cout<<x<<" ";
        }

}