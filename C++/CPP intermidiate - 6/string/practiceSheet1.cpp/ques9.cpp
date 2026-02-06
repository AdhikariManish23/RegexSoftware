#include<bits/stdc++.h>
using namespace std;
    string replaceSpaces(string s) {
    for (char &ch : s)
        if (ch == ' ') ch = '@';
    return s;
}
   
    int main(){
        string s = "hello world jii";
        cout<< replaceSpaces(s);

     return 0;
}