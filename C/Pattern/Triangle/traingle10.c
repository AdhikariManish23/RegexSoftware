#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // yaha outer loop reverse order mai chlega kyu ki traingle pattern change hai
    for (int i = n; i >= 1; i--)
    {
        int temp = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%-2d ", temp);
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