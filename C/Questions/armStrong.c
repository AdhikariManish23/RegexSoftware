#include <stdio.h>

int main()
{
    // OPTIMISED CODE

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    // ------------------------------------------------------------------------------------------------------------------
    // int n;
    // printf("Enter the number : ");
    // scanf("%d", &n);

    // int original = n; // to check in the last
    // int remain;
    // int digit = 0;
    // int result = 0;

    // int temp = n;

    // // Here we are Counting the ( digit )
    // while (temp != 0)
    // {
    //     digit++;
    //     temp /= 10;
    // }

    // // now temp contains no value so to start new loop we again store in temp 'n' values

    // temp = n;

    // while (temp != 0)
    // {
    //     remain = temp % 10;

    //     int power = 1;
    //     int i = 1;
    //     while (i <= digit)
    //     {

    //         power = power * remain;
    //         i++;
    //     }
    //     result = result + power;
    //     temp = temp / 10;
    // }

    // if (result == original)
    //     printf("Armstrong");
    // else
    //     printf("Not a Armstrong");
}
