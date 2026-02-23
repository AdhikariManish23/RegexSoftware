#include<bits/stdc++.h>
using namespace std;
void insertion_sort1(vector<int>&arr,int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void insertion_sort2(vector<int>&v ,int n){
     for(int i = 0; i < n-1; i++){
            int key = v[i];
            int j = i-1;

            while (j >= 0 && v[j]> key)
            {
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = key;
        }
}

// correct version of insertion_sort2
void insertion_sort3(vector<int>& v, int n) {
    for(int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

    
    int main(){
        vector<int> v = {5,1,2,4,8};
        // vector<int> v = {5,3,4}; // for this input insertion_sort2 is not working
        int n = v.size();

        insertion_sort1(v,n);
        // insertion_sort2(v,n);

        for(auto x : v){
            cout<<x<<" ";
        }
    
}