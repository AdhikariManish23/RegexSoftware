#include <bits/stdc++.h>
using namespace std;
//  Return the size of Stack Using Recursion

//  Approach 1
// int sizeOfstack(stack<int>s,int temp){
//     if(s.empty()) return temp;
//     temp++;
//     s.pop();

//     return sizeOfstack(s,temp);
// }

// Approach 2
int sizeOfstack(stack<int> s)
{
    if (s.empty())
        return 0;

    s.pop();

    return 1 + sizeOfstack(s);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int temp = 0;
    // cout<<sizeOfstack(s,temp);
    cout << sizeOfstack(s);

    return 0;
}