#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int>arr = {23,54,76,87,98,12};

        int largest = INT_MIN;
        
        for(auto x : arr){
            largest = max(x,largest);
        }
        cout<<largest; 
}