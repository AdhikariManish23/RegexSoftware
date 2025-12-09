#include <stdio.h>

int main()
{

    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // 'i' humari 'y' axis k equal hota hai or 'j' humari 'x' axis
    // *
    // * *
    // * * *
    // * * * *
    // for (int i = 1; i <= n; i++)  // here there is no change in Looping
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= i) // jb tk j chota hai i se ya phir equal hai i se tb print krwao
    //         {
    //             printf("* ");
    //         }
    //         else // jb nhi hai equal ya chota tb space print krwao
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    //  * * * *
    //    * * *
    //      * *
    //        *

    // for (int i = n; i >= 1; i--)  //here we change both inner or outer loop direction
    // {

    //     for (int j = n; j >= 1; j--)
    //     {
    //         if (j <= i) // jb tk j chota hai i se ya phir equal hai i se tb print krwao
    //         {
    //             printf("* ");
    //         }
    //         else // jb nhi hai equal ya chota tb space print krwao
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // * * * *
    // * * *
    // * *
    // *

    // for (int i = n; i >= 1; i--)  // here we change only outer loop condition
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= i) // jb tk j chota hai i se ya phir equal hai i se tb print krwao
    //         {
    //             printf("* ");
    //         }
    //         else // jb nhi hai equal ya chota tb space print krwao
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    //       *
    //     * *
    //   * * *
    // * * * *

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--) // here we change inner loop condition
        {
            if (j <= i) // jb tk j chota hai i se ya phir equal hai i se tb print krwao
            {
                printf("* ");
            }
            else // jb nhi hai equal ya chota tb space print krwao
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}