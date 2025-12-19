#include <bits/stdc++.h>
using namespace std;

vector<string> convertor(string str)
{
    vector<string> arrayword;
    string word = "";
    for (auto ch : str)
    {
        if (ch != ' ')
        {
            word += ch;
        }
        else
        {
            arrayword.push_back(word);
            word = "";
        }
    }
    arrayword.push_back(word);
    return arrayword;
}

int main()
{
    string str = "I love India so much";
    vector<string> ans = convertor(str);
    for (auto ch : ans)
    {
        cout << ch << " ";
    }
}