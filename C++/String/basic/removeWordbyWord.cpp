#include <bits/stdc++.h>
using namespace std;
// Question : remove Duplicates from sentence
// string s = "deepika is good person"
// output = "depika is god person"
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
        if (!linearsearch(word, ch))
        {
            word += ch;
        }
    }
    return word;
}

string removeDuplicateSent(string str)
{
    string word = "";
    string newstr = "";
    for (auto ch : str)
    {
        if (ch != ' ')
        {
            word += ch;
        }
        else
        {
            newstr += removeDup(word);
            newstr += ' ';
            word = "";
        }
    }
    newstr += removeDup(word);
    return newstr;
}

int main()
{

    string s = "deepika is good person";

    cout << removeDuplicateSent(s);
}