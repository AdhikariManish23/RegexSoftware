#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int> arr1 = {20,21,22,23,24,25};
        vector<int> arr2 = {6,7,8,9,10};
        vector<int> arr3;

        for(int i = 0 ; i < arr1.size(); i++){
            arr3.push_back(arr1[i]);
            
        }

        for(int i = 0 ; i < arr2.size(); i++){
            arr3.push_back(arr2[i]);
            
        }


        for(auto x : arr3){
            cout<<x<<" ";
        }

    
}