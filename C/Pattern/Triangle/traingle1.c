#include <stdio.h>
int main()
{
    // From 1 to 9 question pattern of traingle is same
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int temp = 1;
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