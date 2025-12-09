#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int temp = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%d ", temp);
                temp++;
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}