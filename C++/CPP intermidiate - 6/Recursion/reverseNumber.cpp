#include<bits/stdc++.h>
using namespace std;
    void reverse(int n, int& temp){
        if(n <= 0){
            return;
        }

        int rem = n%10;
        temp = (temp*10)+rem;

        reverse(n/=10,temp);
    }


    int main(){
    int n = 123;
    int temp = 0;
    reverse(n,temp);
    cout<<temp;

     return 0;
}