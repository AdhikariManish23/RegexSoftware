#include <stdio.h>

int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int m;
    printf("Enter the m : ");
    scanf("%d", &m);

    while (n <= m)
    {
        int flag = 0; // flag is inside the loop to reset the for the next n number .
        int i = 2;

        while (i < n) // for optimisation you have to run code from i*i < n
        {
            if (n % i == 0)
            {
                flag = 1;
                break; // after finding 1 divisor it will break the loop and now it will not run to check other numbers
            }
            i++;
        }
        if (flag == 0 && n > 1)
        { // because 1 is not a prime number
            printf("Prime Number : %d\n", n);
        }

        n++;
    }
}