#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    string dept;
    int fees;
    int duration;

    void display()
    {
        cout << "Name: "<<name<<", Department: "<<dept<<", Fees: "<<fees<<", Duration: "<<duration<< endl;
    }
};

int main()
{
    vector<Student> Students;

    int count;
    cout << "Number of Student details you want to Add " << endl;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        Student t;

        cout << "Enter Student name: ";
        cin >> t.name;

        cout << "Enter department: ";
        cin >> t.dept;

        cout << "Enter fees: ";
        cin >> t.fees;

        cout << "Enter duration: ";
        cin >> t.duration;

        Students.push_back(t);
    }

    

    cout << "Student Details:" << endl;
    for (auto t : Students)
    {
        t.display();
    }

    // if you want only name
    // for (auto t : Students)
    // {
    //     cout << t.name << endl;
    // }

    return 0;
}