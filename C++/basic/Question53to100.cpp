#include <bits/stdc++.h>
using namespace std;

// This function is for the Question 56
void reverseString(string s)
{

    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    // Question 53

    // int a = 'a';
    // cout << a;

    // Question 54

    // int n;
    // cout << "Enter the Number : \n";
    // cin >> n;

    // if (n % 3 == 0 && n % 5 == 0)
    // {
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }

    // Question 55

    // int n;
    // int sum = 0;
    // cout << "Enter the 10 Integers \n";
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << "Enter number " << i << ": ";
    //     cin >> n;
    //     sum += n;
    // }

    // cout << "Sum is : " << sum;

    // Question 56
    // string s1, s2, s3;

    // cout << "Enter first string: ";
    // getline(cin, s1);

    // cout << "Enter second string: ";
    // getline(cin, s2);

    // cout << "Enter third string: ";
    // getline(cin, s3);

    // cout << "\nReversed words:\n";

    // reverseString(s1);
    // reverseString(s2);
    // reverseString(s3);

    // Question 57
    // int num;

    // cout << "Enter a number: ";
    // cin >> num;

    // if (num % 10 == 0)
    //     cout << num << " is a multiple of 10";
    // else
    //     cout << num << " is NOT a multiple of 10";

    // Question 58
    // string s;
    // cout << "Enter the string : ";
    // getline(cin, s);

    // cout << "After reversing the String \n";
    // reverseString(s);

    // Question 59
    // int n;
    // int sum = 0;
    // cout << "Enter the 5 Integers \n";
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Enter number " << i << ": ";
    //     cin >> n;
    //     cout << n << endl;
    // }

    // Question 60
    // int a, b, c, d, e, f;
    // int largest;

    // cout << "Enter 6 integers:\n";
    // cin >> a >> b >> c >> d >> e >> f;

    // largest = a;

    // if (b > largest)
    //     largest = b;
    // if (c > largest)
    //     largest = c;
    // if (d > largest)
    //     largest = d;
    // if (e > largest)
    //     largest = e;
    // if (f > largest)
    //     largest = f;

    // cout << "Largest number is: " << largest;

    // Question 61
    // int num;
    // bool isPrime = true;

    // cout << "Enter a number: ";
    // cin >> num;

    // if (num <= 1)
    //     isPrime = false;
    // else
    // {
    //     for (int i = 2; i * i <= num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    // }

    // if (isPrime)
    //     cout << num << " is a Prime number";
    // else
    //     cout << num << " is NOT a Prime number";

    // Question 62
    //  int n;
    //  printf("Enter the Number : ");
    //  scanf("%d", &n);

    // int reverse = 0; // to store the new number
    // int temp;        // to store the duplicate of 'N'
    // int duplicate = n;

    // while (n > 0)
    // {
    //     temp = n % 10;
    //     reverse = (reverse * 10) + temp;
    //     n = n / 10;
    // }

    // if (reverse == duplicate)
    // {
    //     printf("Number is Pallindrome");
    // }
    // else
    // {
    //     printf("Number is Not Pallindrome");
    // }

    // Question 63
    // int n;
    // cout << "Enter the Number : \n";
    // cin >> n;

    // int sum = 1;
    // while (n >= 1)
    // {
    //     sum = sum * n;
    //     n--;
    // }
    // cout << "Fatorial is : " << sum;

    // Question 64
    // int n, m;
    // cout << "Enter the Two Numbers :\n";
    // cin >> n >> m;

    // if (n == m)
    // {
    //     cout << "Equal";
    // }
    // else
    // {
    //     cout << "Not Equal";
    // }

    // Question 65
    //   string s1, s2, s3, s4, s5;

    // cout << "Enter 5 strings:\n";
    // cin >> s1 >> s2 >> s3 >> s4 >> s5;

    // cout << "\nJoined string:\n";
    // cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5;

    // Question 66
    //   float f1,f2,f3,f4;
    //  cin >> f1 >> f2 >> f3 >> f4;
    //  cout << "Average: " << (f1+f2+f3+f4)/4 << endl;

    // Question 67
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // int i = 1;
    // while (i * i <= n)
    // {
    //     if (i * i == n)
    //     {
    //         cout << "Square root = " << i;
    //         return 0;
    //     }
    //     i++;
    // }

    // cout << "Not a perfect square";

    // Question 68
    //  string s1, s2;
    //  cin >> s1 >> s2;
    //  sort(s1.begin(), s1.end());
    //  sort(s2.begin(), s2.end());
    //  if(s1 == s2) cout << "Anagrams" << endl;
    //  else cout << "Not Anagrams" << endl;

    // Question 69
    // int d;
    // cin >> d;
    // if(d%7==0 || d%11==0) cout << "Yes" << endl;
    // else cout << "No" << endl;

    // Question 70
    // int x;
    // int sumEven = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> x;
    //     if (x % 2 == 0)
    //         sumEven += x;
    // }
    // cout << sumEven << endl;

    // Question 71
    // float sum7 = 0, t;
    // for (int i = 0; i < 7; i++) {
    //     cin >> t;
    //     sum7 += t;
    // }
    // float avg = sum7 / 7;
    // cout<< "Average: "  << fixed << setprecision(2)<< avg << endl;

    // Question 72
    // int a, b;
    // cin >> a >> b;
    // if (a > b)
    //     cout << "True" << endl;
    // else
    //     cout << "False" << endl;

    // Question 73
    // int i1;
    // float f;
    // cin >> i1 >> f;
    // cout << i1 + f << endl;

    // Question 74
    // string str;
    // cin >> str;
    // bool hasVowel = false;
    // for (char c : str)
    // {
    //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    //         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    //         hasVowel = true;
    // }
    // if (hasVowel)
    //     cout << "Contains Vowel" << endl;
    // else
    //     cout << "No Vowel" << endl;

    // Question 75
    int a = 1;
    int b = 34;
    int c = 56;
    int d = 87;
    int e = 90;
    int f = 55;
    int g = 23;
    int h = 9;

    cout << e << " " << d << " " << c << " " << f << " " << b << " " << g << " " << h << " " << a;

    // Question 76

    int n = 28;
    int m = 36;

    while (n != 0) // hum yaha loop chla he tb tk rhe hai jb tk divisor 0 naah hojaye toh jaise he n = 0 hoga loop break hojayega
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    printf("%d ", m);

    // agar yaha hum 'n' print krwate to vo remainder print krta jo ki 0 hai kyu ki reaminder baad he baad mai divisor banta hai
    // 'm' kya hai divisor jo ki dividend banta hai baad mai isliye hum ko dividend print krna hota hai

    // Question 77
    // float p1, p2, p3, p4;
    // cin >> p1 >> p2 >> p3 >> p4;
    // cout << "Product: " << p1 * p2 * p3 * p4 << endl;

    // Question 78
    // int n;
    // cin >> n;
    // if (n == 0)
    //     cout << "Zero" << endl;
    // else if (n % 2 == 0)
    //     cout << "Even" << endl;
    // else
    //     cout << "Odd" << endl;

    // Question 79
    //  float num;

    // cout << "Enter 10 float numbers:\n";

    // for (int i = 1; i <= 10; i++) {
    //     cin >> num;        // Input one by one
    //     cout << num << " "; // Print immediately
    // }

    // Question 80
    // float fl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> fl;
    //     cout << fl << " ";
    // }
    // cout << endl;

    // Question 81
    // string s;
    // int n;

    // cout << "Enter a string: ";
    // cin >> s; // For single-word strings

    // cout << "Enter number of times: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << s << endl;
    // }

    // // Question 82
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // cout << "Divisors of " << n << " are: ";

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Question 83
    //   int a, b, c, d, e;
    //     cout << "Enter 5 numbers: ";
    //     cin >> a >> b >> c >> d >> e;

    //     int largest = a;

    //     if (b > largest)
    //         largest = b;
    //     if (c > largest)
    //         largest = c;
    //     if (d > largest)
    //         largest = d;
    //     if (e > largest)
    //         largest = e;

    //     cout << "Largest number = " << largest;

    // Question 84
    // int p;
    // int sumOdd = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> p;
    //     if (p % 2 != 0)
    //         sumOdd += p;
    // }
    // cout << sumOdd << endl;

    // Question 85
    // int pe;
    // cin >> pe;
    // int sumDiv = 0;
    // for (int i = 1; i < pe; i++)
    //     if (pe % i == 0)
    //         sumDiv += i;
    // if (sumDiv == pe)
    //     cout << "Perfect Number" << endl;
    // else
    //     cout << "Not Perfect" << endl;

    // Question 86
    //  int n;
    // cout << "Enter the n : ";
    // cin >> n;

    // int i = 1;
    // while (i * i <= n)
    // {
    //     i++;
    // }

    // cout << (i - 1);

    // Question 87
    // string vo;
    // cin >> vo;
    // int countV = 0;
    // for (char c : vo)
    // {
    //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    //         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    //         countV++;
    // }
    // cout << countV << endl;

    // Question 88
    // int op;
    // cin >> op;
    // if (op % 4 == 0 && op % 8 != 0)
    //     cout << "True" << endl;
    // else
    //     cout << "False" << endl;

    // Question 89
    // int xVar = 10;
    // cout << xVar << endl;

    // // Question 90
    // int jk,kj;
    // cin>>jk>>kj;
    // cout<<jk+kj;

    // Question 91
    // float kl = 3.65;
    // float lk = 2.76;
    // cout << kl+lk << endl;

    // Question 92
    // int age = 25;
    // cout << "My age is " << age << endl;

    // // Querstion 93
    // cout << "Hello, World!" << endl;

    // // Qeustion 94
    // cout << "Your Name" << endl;

    // // Question 95
    // cout << "20" << endl;

    // // Question 96
    // cout << 5 + 3 << endl;

    // // Question 97
    // int aa = 6, bb = 9;
    // cout << aa * bb << endl;

    // // Question 98
    // cin >> n;
    // cout << "My favorite number is " << n << endl;

    // // Question 99
    // cout << "The result is " << 10 + 5 << endl;

    // // Question 100
    // cin >> age;
    // cout << "I am " << age << " years old" << endl;
}