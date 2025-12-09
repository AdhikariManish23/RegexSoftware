#include <stdio.h>
int main()
{

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // To rotate the triangle change the inner or outer loop
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {

            if (i == n || j == i || j == 1) // i == n (to print bottom line) ; i == j (to print digonal); j==1 (to print straight line);
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}