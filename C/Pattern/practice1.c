#include <stdio.h>
int main()
{

    //         *
    //       * * *
    //     *   *   *
    //   *     *     *
    // * * * * * * * * *

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {

            if (i == n || j == i || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for (int k = 2; k <= n; k++) // we start k by 2 here because we already print 1-1 bottom line or diagonal line star already
        {

            if (i == n || k == i)
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