#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,6,9,5,3};
    sort(v.begin(),v.end());
    int count=0;
    int target=11;
    int i=0;
    int j=v.size()-1;
    while(i<j){
        int sum=v[i]+v[j];
        if(sum==target){
            count++;
            i++;
            j--;
        }else if(sum>target){
            j--;
        }else{
            i++;
        }
    }
    cout<<"total pairs "<<count;
}