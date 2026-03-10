#include <bits/stdc++.h>
using namespace std;
// Edge case is Important in this Question which is --> input s = "      "  output = 6 but there is no word

int main()
{
    string s = "cat dog rock";
    // string s = "       ";  edge case
    int count = 0;
    int word = 0; // for the edge case

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word++;
        }
        else if (word != 0) 
        {
            count++;
            word = 0;
        }
    }

    // count last word if string doesn't end with space
    if (word != 0)
    {
        count++;
    }

    cout << count;

    return 0;
}