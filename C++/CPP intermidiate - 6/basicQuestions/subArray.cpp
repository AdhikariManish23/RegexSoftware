#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5};
    
    for(int i = 0; i < v.size(); i++){
        int data = 0;
        for(int j = i; j < v.size(); j++){
            data = (data*10)+v[j];
            cout<<data<<endl;
        }
        cout<<endl;
    }
}