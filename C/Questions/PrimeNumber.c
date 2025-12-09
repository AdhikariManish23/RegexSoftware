#include <stdio.h>
// Alternate Method Below
int main()
{
    // This is for the Finding 1 Prime number at a time

    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    int flag = 0;

    if (n <= 1)
    {
        printf("not a prime number ");
        return 0; // we added return statement if this condition is true than print the not a prime number and istantly ende the code.
    }
    int i = 2;
    while (i * i < n)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("not a prime number ");
    }
    else
    {
        printf("prime number");
    }
}

// #include <stdio.h>

// // This is for the Checking Prime Number From 1 to m

// int main()
// {
//     int m;
//     printf("Enter the m: ");
//     scanf("%d", &m);

//     int i = 2;
//     while (i <= m)
//     {
//         int j = 2;
//         int flag = 0;
//         while (j * j <= i)
//         {
//             if (i % j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//             j++;
//         }
//         if (flag == 0)
//         {
//             printf("%d ", i);
//         }
//         i++;
//     }

//     return 0;
// }
