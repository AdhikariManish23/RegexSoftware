#include<bits/stdc++.h>
using namespace std;
// Write a function that modifies a vector using pass by reference and explain the result.

    void modifyVector(vector<int>& arr){
        arr.push_back(100);
        arr[0] = 23;
    }    

    int main(){
        vector<int> v = {1,2,3,4,5};
        modifyVector(v);

        for(auto x: v){
            cout<<x<<" ";
        }

     
}