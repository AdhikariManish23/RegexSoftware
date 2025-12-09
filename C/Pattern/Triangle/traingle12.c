#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // yaha outer loop reverse order mai chlega kyu ki traingle pattern change hai
    int temp = n;
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%-2d ", temp);
            }
            else
            {
                printf("  ");
            }
        }
        temp--;
        printf("\n");
    }
}