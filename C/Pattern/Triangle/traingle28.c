#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // From 28 to 36 question both the loop traverse opposite
    for (int i = n; i >= 1; i--)
    {
        int temp = n;

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%4d ", temp); // fixed width printing
                temp--;
            }
            else
            {
                printf("     "); // 5 space

                temp--;
            }
        }

        printf("\n");
    }
}
