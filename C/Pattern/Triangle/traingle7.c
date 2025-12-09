#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int temp = n * (n + 1) - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%2d ", temp);
                temp -= 2;
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}