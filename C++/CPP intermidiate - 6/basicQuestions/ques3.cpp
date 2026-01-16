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


// ---------------------------------------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int customer;
//     cout << "Enter No. of customers: ";
//     cin >> customer;

//     string names[customer] = {};
//     int units[customer] = {};
//     int bills[customer] = {};

//     for(int i=0; i<customer; i++) {
//         cout << "Enter customer name: ";
//         cin >> names[i];

//         cout << "Enter unit: ";
//         cin >> units[i];

//         if(units[i] <= 100) bills[i] = units[i] * 5;
//         else if(units[i] > 100 || units[i] <= 300) bills[i] = units[i] * 7;
//         else if(units[i] > 300) bills[i] = units[i] * 10;

//         if(bills[i] > 2000) {
//             int surcharge = (bills[i] * 5)/100;
//             bills[i] += surcharge;
//         }
//     }

//     cout << "Customers bill list: " << endl;
//     for(int i=1; i<=customer; i++) {
//         cout << i << ". " << names[i] << ", Unit: " << units[i] << ", Bill: " << bills[i] << endl;
//     }

//     return 0;
// }