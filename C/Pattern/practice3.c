#include <stdio.h>
int main()
{
    // 1 2 3 4 5 4 3 2 1
    // 1     4   4     1
    // 1   3       3   1
    // 1 2           2 1
    // 1               1

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == j || i == n)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }

        for (int k = n - 1; k >= 1; k--)
        {
            if (k == 1 || i == k || i == n)
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