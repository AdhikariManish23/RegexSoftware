#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    vector<char> ch1 = {'h', 'e', 'l', 'l', 'o'};

    reverseString(ch1);

    for (auto it : ch1)
    {
        cout << it << " ";
    }
}