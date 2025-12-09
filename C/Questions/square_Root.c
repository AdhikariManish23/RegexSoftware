#include <stdio.h>
// Question : Find The Square root of n (round down the result) ignoring the maths Library
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    int i = 1;
    while (i * i <= n)
    {
        i++;
    }

    printf("%d ", i - 1);
}
