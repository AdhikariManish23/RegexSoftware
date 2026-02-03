#include<bits/stdc++.h>
using namespace std;

bool checkPallidrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;   // move forward
        j--;   // move backward
    }
    return true;
}

bool optimised(string s ){
    string temp = s;
    reverse(s.begin(),s.end());

    if(temp == s){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    string s = "madam";
    // cout << checkPallidrome(s);
    cout << optimised(s);
}
