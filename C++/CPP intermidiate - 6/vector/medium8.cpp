#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    vector<int> arr = {4,2,21,10,9};

    // int temp = arr.back();
    int temp = arr[arr.size()-1];

    for (int i = arr.size() - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];   // shift right
    }

    arr[0] = temp;  // put last element in front

    for (auto x : arr) {
        cout << x << " ";
    }
}


     
