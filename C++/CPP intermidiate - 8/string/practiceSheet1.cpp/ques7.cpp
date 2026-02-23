#include<bits/stdc++.h>
using namespace std;
 string removeSpaces(string s) {
    string ans = "";
    for (char ch : s)
        if (ch != ' ') ans += ch;
    return ans;
}
   
    int main(){
        string s = "hello world jii";
        cout<<removeSpaces(s);

     return 0;
}