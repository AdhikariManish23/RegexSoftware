#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int a = 0, int b = 1) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    int c = a+b;
    a = b;
    return fibonacci(n-1,a,c);
}

int main() {
    int n = 5;
    cout << fibonacci(n);
    return 0;
}
