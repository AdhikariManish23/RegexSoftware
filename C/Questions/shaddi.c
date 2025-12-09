#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the Gender : ");
    scanf("%c", &ch);

    if (ch == 'm')
    {
        int age;
        printf("Enter the Age ");
        scanf("%d", &age);

        if (ch == 'm' && age >= 21)
        {
            printf("He can Marry ");
        }
        else
        {
            printf(" padhai likhai karo ias/yas banno ");
        }
    }
    else if (ch == 'f')
    {
        int age;
        printf("Enter the Age ");
        scanf("%d", &age);

        if (ch == 'f' && age >= 18)
        {
            printf("She can Marry");
        }
        else
        {
            printf("choti bacchi  ho kya ");
        }
    }
    else
    {
        printf("Invalid Gender ");
    }
}