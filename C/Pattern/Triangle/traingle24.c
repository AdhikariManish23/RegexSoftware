#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // yaha outer loop reverse order mai chlega kyu ki traingle pattern change hai
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%4d ", temp);
                temp += 2;
            }
            else
            {
                printf("     ");
            }
        }

        printf("\n");
    }
}
