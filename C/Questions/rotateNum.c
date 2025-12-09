#include <stdio.h>
// Question : Write a program where user give any digit and rotate them clock wise or anit clockwise by giving 'k' rotation in negative or positive .

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    int k; // positive = anticlockwise, negative = clockwise
    printf("Enter the k : ");
    scanf("%d", &k);

    int temp = n;
    int count = 0;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    k = k % count;
    if (k < 0)
    {
        k = k + count;
    }

    int power = 1;
    int i = 1;
    while (i <= count)
    {
        power *= 10;
        i++;
    }

    while (k > 0)
    {
        n = (n % 10) * (power / 10) + (n / 10);
        k--;
    }

    printf("After Rotation %d ", n);
}