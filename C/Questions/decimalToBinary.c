#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    long long binary = 0;
    int rem, place = 1;

    while (n > 0)
    {
        rem = n % 2; // get remainder (0 or 1)
        n = n / 2;   // divide by 2
        binary = binary + rem * place;
        place = place * 10; // increase place value (1, 10, 100…)
    }

    printf("Binary: %d", binary);
    return 0;
}
