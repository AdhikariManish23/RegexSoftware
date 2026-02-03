#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aBsJSiL";

    for(auto &x : s){
        if(islower(x)){  // islower/upper for checking the value
            x = toupper(x); // toupper/lower for converting the value
        }
        else{
            x = tolower(x);
        }
    }

    cout << s;
    return 0;
}
