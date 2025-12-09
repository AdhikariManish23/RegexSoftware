#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    int position = 1; // Position of each digit (1,2,3,...)
    int inverse = 0;  // Final result

    while (n > 0)
    {
        int digit = n % 10; // Extract last digit

        // Place the position value at index = digit
        // Ex: digit = 4 → put 'position' at 10^(4-1)
        int powerOfTen = 1;
        for (int i = 1; i < digit; i++)
        {
            powerOfTen *= 10;
        }

        // Add value to inverse number
        inverse += position * powerOfTen;

        // Move to next digit
        n /= 10;
        position++;
    }

    printf("Inverse Number : %d\n", inverse);

    return 0;
}

// Using For Loop

// int main()
// {

//     // Inverse Digit
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d", &n);

//     int result = 0;
//     int digitCount = 0;

//     for (int temp = n; temp > 0; temp /= 10)
//     {

//         int digit = temp % 10;
//         digitCount++;

//         int powerOfTen = 1;
//         for (int i = 0; i < digit; i++)
//         {
//             powerOfTen *= 10;
//         }

//         result += digitCount * powerOfTen / 10;
//     }

//     printf("Result : %d\n", result);
// }
