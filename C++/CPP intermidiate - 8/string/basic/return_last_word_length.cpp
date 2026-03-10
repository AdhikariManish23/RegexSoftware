#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "apple";
    int word = 0;

    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] != ' '){
            word++;
        }
        else if(word != 0){
            break;
        }
    }

    cout << word;

    return 0;
}