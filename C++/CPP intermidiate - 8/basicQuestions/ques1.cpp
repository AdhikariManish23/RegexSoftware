#include <iostream>
using namespace std;
int main()
{
    int vehicle;
    cout << "enter number of vehicles " << endl;
    cin >> vehicle;
    if (vehicle > 10)
    {
        cout << "Parking is full ";
        return 0;
    }
    else if (vehicle < 0)
    {
        cout << "Enter valid Number ";
        return 0;
    }
    cout << "menu of parking :-" << endl;
    cout << "1. BIKE - 20/hr" << endl;
    cout << "2. CAR - 50/hr" << endl;
    cout << "3. TRUCK - 100/hr" << endl;
    int cartotal = 0;
    int biketotal = 0;
    int trucktotal = 0;
    for (int i = 1; i <= vehicle; i++)
    {
        string name;
        cout << "enter " << i << " vechicle name " << endl;
        cin >> name;
        if (name == "bike" || name == "car" || name == "truck")
        {
            int hours;
            cout << "enter number of hours your parked " << endl;
            cin >> hours;

            if (name == "car")
            {
                cartotal += hours * 50;
            }
            else if (name == "bike")
            {
                biketotal += hours * 20;
            }
            else if (name == "truck")
            {
                trucktotal += hours * 100;
            }
        }
        else
        {
            cout << "right a valid name ";
            return 0;
        }
    }
    cout << "bike total " << biketotal << endl;
    cout << "car total " << cartotal << endl;
    cout << "truck total " << trucktotal << endl;

    int total = biketotal + cartotal + trucktotal;
    if (total > 500)
    {
        int discount = (total * 10) / 100;
        total -= discount;
    }
    cout << "Total Bill is : " << total;
}