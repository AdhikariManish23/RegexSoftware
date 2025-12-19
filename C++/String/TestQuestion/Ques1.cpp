#include <iostream>
#include <string>
using namespace std;

int reverseNumber(int number)
{
    int reverse = 0;
    while (number != 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return reverse;
}

string upperCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

bool linearsearch(string s, char key)
{
    for (auto ch : s)
    {
        if (ch == key)
        {
            return true;
        }
    }
    return false;
}

string removeDup(string s)
{
    string word = "";
    for (auto ch : s)
    {
        if (!linearsearch(word, ch))
        {
            word += ch;
        }
    }
    return word;
}

int main()
{
    string s = "123abcABC543def";

    string num = "";
    string str = "";

    for (char ch : s)
    {
        if (ch >= '0' && ch <= '9')
        {
            num += ch;
        }
        else
        {
            str += ch;
        }
    }

    cout << num << endl;
    cout << str << endl;

    // convert into string to integer

    int number = stoi(num);
    cout << number << endl;

    // reverse the number

    cout << reverseNumber(number) << endl;

    // convert into upper case

    string ans = upperCase(str);
    cout << ans << endl;

    // remove duplicates

    cout << removeDup(ans);
}
