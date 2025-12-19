#include <bits/stdc++.h>
using namespace std;
// Question count special character (!@$@$#%#%#)
bool linearsearch(string s, char key)
{
    for (auto ch : s)
    {
        if (ch == key)
            return true;
    }
    return false;
}
int countSpecialChar(string s)
{
    string specialChar = ":;'?/><.,[]{}+_)(*&^%$#@!~)`-=";
    
    int count = 0;
    for (auto ch : s)
    {
        if (linearsearch(specialChar, ch))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "man@&$#%^&#ish123HE";

    int ans = countSpecialChar(s);
    cout << ans;
    return 0;
}