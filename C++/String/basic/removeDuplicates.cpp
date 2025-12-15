#include <bits/stdc++.h>
using namespace std;

// Checks if character `ch` already exists in string `s`
bool linearSearch(string s, char ch){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ch) return true; // duplicate found do nothing
    }
    return false; // not found then we have to add the character into new string
}

// Removes duplicate characters while keeping order
string removeDuplicates(string str){
    string ans = ""; // stores unique characters

    for(int i = 0; i < str.length(); i++){
        // add character only if it is not already in ans
        if(!linearSearch(ans, str[i])){ //here we send a array and and key to the above method
            ans += str[i]; //if it above method return false it means we have to add character to the new string
        }
    }
    return ans;
}

int main(){
    string s = "hellojii";
    cout << removeDuplicates(s); // Output: heloji
}
