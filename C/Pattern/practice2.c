#include <stdio.h>

int main()
{
    //         1
    //       2 1 2
    //     3 2 1 2 3
    //   4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // int temp = n;
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%d ", j);
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
                printf("%d ", k);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}