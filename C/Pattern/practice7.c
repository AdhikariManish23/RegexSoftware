#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int temp = n - 1;
        for (int j = n; j >= 1; j--)
        {

            if (i == j)
            {
                printf("%d ", i);
            }
            else if (i == n)
            {
                printf("%d ", temp);
                temp--;
            }
            else
            {
                printf("  ");
            }
        }

        int num = 2;
        for (int k = 2; k <= n; k++)
        {
            if (i == k)
            {
                printf("%d ", i);
            }
            else if (i == n)
            {
                printf("%d ", num);
                num++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}