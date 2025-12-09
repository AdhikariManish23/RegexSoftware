
#include <stdio.h>
int main()
{

    printf("      You have 3 option to Give Input \n");
    printf(" For Binary press  ( 1 )\n");
    printf(" For Decimal press ( 2 )\n");
    printf(" For Octal press   ( 3 )\n");

    int n;
    scanf("%d", &n);

    int num;
    printf("Now Enter the Number : ");
    scanf("%d", &num);

    if (n == 1)
    {
        printf("Choose the Output type Decimal / Octal\n");
        printf("For Decimal press ( d )\n");
        printf("For Octal press   ( o )\n");
        char ch;
        scanf(" %c", &ch);

        if (ch == 'd' || ch == 'D')
        {
            int ans = 0;
            int power = 1;
            while (num > 0)
            {
                int temp = num % 10;
                ans += temp * power;
                power = power * 2;
                num /= 10;
            }
            printf("Decimal: %d\n", ans);
        }
        else
        {
            int ans = 0;
            int power = 1;
            while (num > 0)
            {
                int temp = num % 10;
                ans += temp * power;
                power = power * 2;
                num /= 10;
            }

            long long octal = 0;
            int rem, place = 1;

            while (ans > 0)
            {
                rem = ans % 8;
                ans = ans / 8;
                octal = octal + rem * place;
                place = place * 10;
            }

            printf("Octal: %d", octal);
        }
    }

    else if (n == 2)
    {
        printf("Choose the Output type Binary / Octal\n");
        printf("For Binary press  ( b )\n");
        printf("For Octal press   ( o )\n");

        char ch;
        scanf(" %c", &ch);

        if (ch == 'b')
        {
            long long binary = 0;
            int rem, place = 1;

            while (num > 0)
            {
                rem = num % 2;
                num = num / 2;
                binary = binary + rem * place;
                place = place * 10;
            }

            printf("Binary: %d", binary);
        }
        else
        {
            long long octal = 0;
            int rem, place = 1;

            while (num > 0)
            {
                rem = num % 8;
                num = num / 8;
                octal = octal + rem * place;
                place = place * 10;
            }

            printf("Octal: %d", octal);
        }
    }

    else if (n == 3)
    {
        printf("Choose the Output type Binary / Decimal\n");
        printf("For Binary press  ( b )\n");
        printf("For Decimal press   ( d )\n");

        char ch;
        scanf(" %c", &ch);

        if (ch == 'd')
        {
            int ans = 0;
            int power = 1;

            while (num > 0)
            {
                int digit = num % 10;
                ans += digit * power;
                power = power * 8;
                num /= 10;
            }

            printf("Decimal: %d\n", ans);
        }
        else
        {
            int ans = 0;
            int power = 1;

            while (num > 0)
            {
                int digit = num % 10;
                ans += digit * power;
                power = power * 8;
                num /= 10;
            }

            long long binary = 0;
            int rem, place = 1;

            while (ans > 0)
            {
                rem = ans % 2;
                ans = ans / 2;
                binary = binary + rem * place;
                place = place * 10;
            }

            printf("Binary: %d", binary);
        }
    }
}