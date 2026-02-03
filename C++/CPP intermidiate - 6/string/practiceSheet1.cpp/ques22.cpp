#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "I love coding";
    vector<string> words;
    string temp = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            words.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    words.push_back(temp); // last word

    for(int i = words.size() - 1; i >= 0; i--){
        cout << words[i] << " ";
    }

   
}
