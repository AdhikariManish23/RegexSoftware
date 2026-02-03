#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcdef";

    int n = s.length();

    if(n % 2 == 1){
        cout << s[n / 2];
    }
    else{
        cout << s[(n/2) - 1] << " " << s[n / 2];
    }

    return 0;
}
