#include <bits/stdc++.h>
using namespace std;

bool isVowel(char key)
{
    string vowel = "aeiouAEIOU";
    for (auto it : vowel)
    {
        if (it == key)
            return true;
    }
    return false;
}

string reverseVowels(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j) 
    {
        while (i < j && !isVowel(s[i]))  i++;

        while (i < j && !isVowel(s[j]))  j--;

        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main()
{
    string str = "leetcode";
    cout << reverseVowels(str);
}
