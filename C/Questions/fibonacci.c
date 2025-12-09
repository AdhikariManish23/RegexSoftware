#include <stdio.h>

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d", &n);

    int num1 = 0;
    int num2 = 1;
    int nextNum;

    while (n > 0)
    {
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
        printf("%d ", nextNum);
        n--;
    }
}
