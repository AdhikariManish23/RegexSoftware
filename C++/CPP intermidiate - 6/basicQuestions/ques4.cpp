#include <bits/stdc++.h>
using namespace std;

int main()
{

    int balance = 10000;
    int transaction;
    cout << "Enter the number of transaction \n";
    cin >> transaction;

    cout << "\n1. Withdraw\n2. Deposit\n3. Balance Enquiry";

    for (int i = 1; i <= transaction; i++)
    {

        int option;
        cout << "\nEnter option no.\n";
        cin >> option;

        if (option == 1)
        {
            int amount;
            cout << "Enter Amount to Withdraw : \n";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Not Enough Balance ";
            }
            if (amount > 5000)
            {
                cout << "You are exceeding your withdrawal limit";
            }
            balance -= amount;
            cout << "Withdrawl successful!";
        }

        else if (option == 2)
        {
            int amount;
            cout << "Enter Deposit amount : \n";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful!";
        }
        else if (option == 3)
        {
            cout << "Your Current Balance: " << balance;
        }
        else
            cout << "Enter valid option!";
    }

    cout << "Your Balance is : " << balance;
}