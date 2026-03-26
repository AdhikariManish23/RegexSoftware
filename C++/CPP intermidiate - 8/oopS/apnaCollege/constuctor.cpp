#include <bits/stdc++.h>
using namespace std;
class Car
{
    string name;
    string color;

public:

//  When we create multiple constructor its called overloading 
    Car()
    {
        cout << "Constructor is called ";
    }

    Car(string nameVal, string colorVal)
    { // In Public we create constructor beacuse it call in main

        name = nameVal;
        color = colorVal;
    }

    void start()
    {
        cout << "car has start ";
    }

    void stop()
    {
        cout << "car has stopeed";
    }

    string getName()
    {
        return name;
    }
};
int main()
{
    Car c0; // it call Non-Parameterised Constructor
    Car c1("i20", "starryNight"); // it call Parameterised
    cout << endl;
    cout << c1.getName();
}