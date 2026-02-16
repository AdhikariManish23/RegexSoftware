#include <bits/stdc++.h>
using namespace std;

// Count even digits in a number
int count(int n, int ans) {

    if (n == 0) {
        return ans;  
    }

    int rem = n % 10;
    if (rem % 2 == 0)ans++;

    return count(n / 10, ans);
}

int main() {
    int n = 13;
    int ans = 0;

    cout << count(n, ans);
    return 0;
}
