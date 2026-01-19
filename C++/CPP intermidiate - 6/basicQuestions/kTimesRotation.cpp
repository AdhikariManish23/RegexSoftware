#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 2;

    while(k > 0){
    int temp = arr[arr.size()-1];

    for (int i = arr.size() - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];  
    }

    arr[0] = temp;
    k--;
        
    }
    
     for (auto x : arr) {
        cout << x << " ";
    }
}


     
