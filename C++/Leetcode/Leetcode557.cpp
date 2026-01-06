#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string result = "";
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word = s[i] + word;   // prepend character
        }
    }

    // add last word
    result += word;
    return result;
}

int main() {
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s);
}
