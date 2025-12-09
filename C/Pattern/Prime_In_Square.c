

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int count = 0;
    int total = n * n;

    for (int num = 2; count < total; num++)
    {

        int prime = 1;
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%-2d ", num);
            count++;

            if (count % n == 0)
            {
                printf("\n");
            }
        }
    }
}