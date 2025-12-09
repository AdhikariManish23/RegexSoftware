#include <bits/stdc++.h>
using namespace std;
vector<int> solution(int left, int right)
{
    vector<int> ans; // to store result

    for (int num = left; num <= right; num++)
    {
        int temp = num;
        bool divisible = true; // assume number is valid

        while (temp > 0)
        {
            int digit = temp % 10; // last digit

            if (digit == 0 || num % digit != 0)
            {
                divisible = false; // not self-dividing
                break;
            }

            temp = temp / 10; // remove last digit
        }

        if (divisible == true)
        {
            ans.push_back(num); // store valid number
        }
    }

    return ans;
}

int main()
{
    int left;
    cout << "Enter the left side number : ";
    cin >> left;
    int right;
    cout << "Enter the right side number : ";
    cin >> right;

    vector<int> ans = solution(left, right);

    cout << "Self Dividing Numbers are: ";
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}