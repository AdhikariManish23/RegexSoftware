#include<bits/stdc++.h>
using namespace std;
    
    int main(){
        vector<int> arr = {2,4,5,6,7,8,9};
        int odd = 0;
        int even = 0;

        for(auto x : arr){
            if(x%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

    cout<<"Total odd value is : "<<odd<<endl;    
    cout<<"Total even value is : "<<even;    
    
}