
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "123456";

    bool onlyDigits = true;

    for(char c : s){
        if(!isdigit(c)){
            onlyDigits = false;
            break;
        }
    }

    if(onlyDigits)
        cout << "String contains only digits";
    else
        cout << "String does not contain only digits";

    return 0;
}
