#include <stdio.h>
int main()
{
    // *               *
    // * *           * *
    // *   *       *   *
    // *     *   *     *
    // *       *       *
    // *     *   *     *
    // *   *       *   *
    // * *           * *
    // *               *

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == j)
            {
                printf("* ");
                // printf("%d ", j); // to print the number
            }
            else
            {
                printf("  ");
            }
        }

        for (int k = n - 1; k >= 1; k--)
        {
            if (k == 1 || i == k)
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

    //  For Below Triangle
    for (int i = n - 1; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == j)
            {
                printf("* ");
                // printf("%d ", j); // to print the number
            }
            else
            {
                printf("  ");
            }
        }

        for (int k = n - 1; k >= 1; k--)
        {
            if (k == 1 || i == k)
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