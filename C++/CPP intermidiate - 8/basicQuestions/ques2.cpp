#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "    Menu : \n";
    cout << "Pizza - 200 \n";
    cout << "Burger - 100 \n";
    cout << "Momos - 80 \n";
    cout << "Coffee - 120 \n";

    int items;
    cout << "How many items do you waant to order ? \n";
    cin >> items;
    int pizzaTotal = 0;
    int burgerTotal = 0;
    int momosTotal = 0;
    int coffeeTotal = 0;

    for (int i = 1; i <= items; i++)
    {
        string food;
        cout << "Enter the food name : ";
        cin >> food;

        int quantity;
        cout << "Enter the food quantity : ";
        cin >> quantity;

        if (food == "Pizza")
        {
            pizzaTotal = 200 * quantity;
        }
        else if (food == "Burger")
        {
            burgerTotal = 100 * quantity;
        }
        else if (food == "Momos")
        {
            momosTotal = 80 * quantity;
        }
        else if (food == "Coffee")
        {
            coffeeTotal = 120 * quantity;
        }
    }

    int total = pizzaTotal + burgerTotal + momosTotal + coffeeTotal;

    if (total != pizzaTotal && total != burgerTotal && total != momosTotal && total == coffeeTotal)
    {
        int discount = (total * 20) / 100;
        cout << "Bill is : " << total - discount;
    }
    else if (total > 500)
    {
        cout << "You have two option : \n";
        int press;
        cout << "press 1 (for free delivery ) \n";
        cout << "press 2 (add 50 in bill) \n";
        cin >> press;
        if (press == 2)
        {
            cout << "Bill is : " << total + 50;
            return 0;
        }
        else
        {
            cout << "Bill is : " << total;
            return 0;
        }
    }
    else
    {
        cout << "Bill is : " << total;
    }
}