#include <bits/stdc++.h>
using namespace std;

//Question remove vowel from a string

bool linearsearch(string s, char key)
{
    for (auto ch : s)
    {
        if (ch == key)
        {
            return true;
        }
    }
    return false;
}

string removevowels(string str)
{
    string vowels = "aeiouAEIOU";
    string word = "";

    for (auto ch : str)
    {
        if (!linearsearch(vowels, ch))
        {
            word = word + ch;
        }
    }
    return word;
}

int main()
{
    string s = "apple";

    cout << removevowels(s);
}

// Similar to this Question you have to remove vowels from a sentenece