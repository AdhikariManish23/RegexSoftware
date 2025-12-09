#include <stdio.h>
int main()
{
    int n = 10; // Example octal number
    int ans = 0;
    int power = 1; // 8^0 = 1

    while (n > 0)
    {
        int digit = n % 10;
        ans += digit * power;
        power = power * 8;
        n /= 10;
    }

    printf("%d\n", ans); // Prints decimal equivalent of octal 157 (which is 111 decimal)
    return 0;
}
