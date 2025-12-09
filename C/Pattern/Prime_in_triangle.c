#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 2;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row;)
        {
            if (isPrime(num))
            {
                printf("%4d ", num);
                col++;
            }
            num++;
        }
        printf("\n");
    }
}
