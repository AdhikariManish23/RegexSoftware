#include <bits/stdc++.h>
using namespace std;
// Maximum number of balls in a box
int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countBalls(int lowLimit, int highLimit)
{
    int maxCount = 0;

    for (int i = lowLimit; i <= highLimit; i++)
    {
        int currentSum = digitSum(i);
        int count = 0;

        // Recount how many numbers have the same digit sum
        for (int j = lowLimit; j <= highLimit; j++)
        {
            if (digitSum(j) == currentSum)
                count++;
        }

        if (count > maxCount)
            maxCount = count;
    }

    return maxCount;
}

int main()
{
    int lowLimit = 1, highLimit = 20;
    cout << countBalls(lowLimit, highLimit);
}