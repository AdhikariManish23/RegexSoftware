#include <bits/stdc++.h>
using namespace std;
// Question : remove Duplicates from sentence
// string s = "Hello namaste jii"
// output = "helo namste ji"
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

string removeDup(string str)
{
    string word = "";

    for (auto ch : str)
    {
        if (ch == ' ')
        {
            word += ' ';
        }
        else if (!linearsearch(word, ch))
        {
            word += ch;
        }
    }
    return word;
}

int main()
{

    string s = "manish is good person";

    cout << removeDup(s);
}