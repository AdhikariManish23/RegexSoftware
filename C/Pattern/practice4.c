#include <stdio.h>
int main()
{

    // * * * * * * *
    // * * *   * * *
    // * *       * *
    // *           *
    // *           *
    // * *       * *
    // * * *   * * *
    // * * * * * * *
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for (int j = n - 1; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    // For lower triangle

    for (int i = 1; i <= n; i++) // if you wat to take common mid point start i with 2
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for (int j = n - 1; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}