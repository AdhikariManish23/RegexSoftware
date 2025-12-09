#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    long long octal = 0;
    int rem, place = 1;

    while (n > 0)
    {
        rem = n % 8; // get remainder (0 or 1)
        n = n / 8;   // divide by 2
        octal = octal + rem * place;
        place = place * 10; // increase place value (1, 10, 100…)
    }

    printf("Octal: %d", octal);
    return 0;
}
