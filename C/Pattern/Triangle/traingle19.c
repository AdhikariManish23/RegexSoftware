#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    // yaha outer loop reverse order mai chlega kyu ki traingle pattern change hai

    for (int i = 1; i <= n; i++)
    {
        int temp = n;
        for (int j = n; j >= 1; j--)
        {
            if (j <= i) // jb tk 'j' 'i' se chota ya brabar hai tb tk temp print kro
            {
                printf("%d ", temp);
                temp--;
            }
            else
            {
                printf("  ");
                temp--; // jb print nhi kr rha tb bhi toh value -- honi chaiye tbhi toh vo
                //                        _ _ _ 1
                //                        _ _ 2 1
                //                        _ 3 2 1
                //                        4 3 2 1
            }
        }

        printf("\n");
    }
}