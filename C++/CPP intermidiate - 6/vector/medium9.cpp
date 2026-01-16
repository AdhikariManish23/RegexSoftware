#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    
    vector<int> arr = {4,2,21,10,9};

    
    int temp = arr[0];

    for (int i = 0 ; i < arr.size(); i++) {
        arr[i] = arr[i+1];   // shift right
    }

    arr[arr.size()-1] = temp;  // put last element in front

    for (auto x : arr) {
        cout << x << " ";
    }
}