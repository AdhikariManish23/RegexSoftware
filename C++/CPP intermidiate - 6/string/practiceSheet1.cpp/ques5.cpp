#include<bits/stdc++.h>
using namespace std;
    int stringLength(string s) {
    int count = 0;
    for (char ch : s) count++;
    return count;
}
    int main(){
        string s = "helloWorld";
        cout<<stringLength(s);


     return 0;
}