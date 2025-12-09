#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    int reverse = 0; // to store the new number
    int temp;        // to store the duplicate of 'N'
    int duplicate = n;

    while (n > 0)
    {
        temp = n % 10;
        reverse = (reverse * 10) + temp;
        n = n / 10;
    }

    if (reverse == duplicate)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is Not Pallindrome");
    }
}