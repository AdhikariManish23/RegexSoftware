#include <bits/stdc++.h>
using namespace std;

int main()
{

    int customer;
    cout << "Enter Number of Customer \n";
    cin >> customer;

    for (int i = 1; i <= customer; i++)
    {
        string name;
        cout << "Enter the name \n";
        cin >> name;

        int unit;
        cout << "Enter Unit Consumed : \n";
        cin >> unit;

        int bill = 0;

        if (unit <= 100)
        {
            bill = unit * 5;
        }
        else if (unit > 100 && unit <= 300)
        {
            bill = unit * 7;
        }
        else
        {
            bill = unit * 10;
        }
        // ----------------------------------------------------------------------------------------------
        if (bill > 2000)
        {
            int surcharge = (bill * 5) / 100;
            bill = bill + surcharge;
            cout << "Customer name : " << name << ", Unit : " << unit << ", Bill after surcharge : " << bill << endl;
        }
        else
        {
            cout << "Customer name : " << name << ", Unit : " << unit << ", Bill : " << bill << endl;
        }
    }
}