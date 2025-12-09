#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Question 42

    // int n, m, sum;
    // cout << "Enter the 1st num : ";
    // cin >> n;

    // cout << "Enter the 2nd num : ";
    // cin >> m;

    // sum = n + m;
    // cout << "The sum is : " << sum;

    // Questtion 43

    // int a, b;
    // cout << "Enter the Two Numbers : ";
    // cin >> a >> b;

    // int diff = a - b;
    //    if(diff<0){
    //          diff = abs(diff);
    //     }

    // cout << "Difference is : " << diff;

    // Question 44

    // int a, b, c, d, e;
    // cout << "Enter 5 numbers: ";
    // cin >> a >> b >> c >> d >> e;
    // float average = (a + b + c + d + e) / 5.0;
    // cout << "Average = " << average;

    // Question 45
    //  int a, b;

    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // cout << "Before Swapping: a = " << a << ", b = " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    // cout << "After Swapping: a = " << a << ", b = " << b;

    // Question 46

    // int n;
    // cout << "Enter a digit : ";
    // cin >> n;

    // if (n > 0)
    // {
    //     cout << "Positive";
    // }
    // else if (n < 0)
    // {
    //     cout << "Negative";
    // }
    // else
    // {
    //     cout << "Zero";
    // }

    // Question 47

    // int n;
    // cout << "Enter the number : ";
    // cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Even Number ";
    // }
    // else
    // {
    //     cout << "Odd Number";
    // }

    // Question 48
    // float num;

    // cout << "Enter 20 float numbers:\n";

    // for (int i = 1; i <= 20; i++)
    // {
    //     cin >> num;
    //     cout << "You entered: " << num << endl;
    // }

    // Question 49
    string s1, s2, temp;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    temp = s1;
    s1 = s2;
    s2 = temp;

    cout << "\nAfter Swapping:\n";
    cout << "First = " << s1 << endl;
    cout << "Second = " << s2 << endl;
}