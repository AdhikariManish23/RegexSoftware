#include<bits/stdc++.h>
using namespace std;
    void countEven(vector<int>v , int & even,int& odd,  int i) {
        if(i == v.size()) return ;

        if(v[i] % 2 == 0) even+=1; // Only for even
        if(v[i] % 2 != 0) odd+=1; // Only for odd

        return countEven(v,even,odd,i+1);
    }  
    int main(){
    
        vector<int>v = {1,2,4,7,4,6,8,9};
        int even  = 0;
        int odd = 0;
        countEven(v,even,odd,0);
        cout<<"even "<<even<<endl;
        cout<<"odd "<<odd<<endl;
     return 0;
}