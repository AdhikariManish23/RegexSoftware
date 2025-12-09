#include <stdio.h>
int main()
{
    //       1
    //     1 1 1
    //   1 1 1 1 1
    // 1 1 1 1 1 1 1

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("  ");
            }
        }

        for (int k = 2; k <= n; k++)
        {
            if (k <= i)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}