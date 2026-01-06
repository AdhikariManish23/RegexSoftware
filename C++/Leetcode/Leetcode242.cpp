#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }

    int count[26] = {0};

    // Count characters of str1
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // Reduce count using str2
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a'; // FIXED
        if (count[idx] == 0)
        {
            return false;
        }
        count[idx]--;
    }

    return true;
}

int main()
{
    string s = "anagrak";
    string st = "nagaram";

    if (isAnagram(s, st))
    {
        cout << "Anagram ";
    }
    else
    {
        cout << "Not a Anagram";
    }
}
