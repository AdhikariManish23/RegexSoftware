#include <stdio.h>
int main()
{
    int n = 10111;
    int ans = 0;
    int power = 1; // 2^0 is 1
    while (n > 0)
    {
        int temp = n % 10;
        ans += temp * power;
        power = power * 2;
        n /= 10;
    }
    printf("%d\n", ans); // Output will be 23 for binary 10111
    return 0;
}
