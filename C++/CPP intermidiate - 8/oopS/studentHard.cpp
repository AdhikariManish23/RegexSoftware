#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string sname;
    string scourse;
    int fees;
    int duration;

    void changeName(string updateName)
    {
        sname = updateName;
    }

    void changeCourse(string updateCourse)
    {
        scourse = updateCourse;
    }

    void printDetails()
    {
        cout << "Student Details : " << endl;
        cout << "Name - " << sname << endl;
        cout << "Course - " << scourse << endl;
        cout << "Fees - " << fees << endl;
        cout << "Duration - " << duration << endl;
    }
};


int main()
{

    cout << "Select an Option :" << endl;
    cout << "1. Check student details " << endl;
    cout << "2. Register Student Details " << endl;

    int opt;
    cin >> opt;

    if (opt == 1)
    {
        cout << "Enter the Student name :" << endl;
    }
    else
    {
        int count;
        cout << "Enter Number of Student You want to store Data : " << endl;
        cin >> count;

        vector<string> storename;
        vector<string> storecourse;
        vector<int> storefees;
        vector<int> storeduration;

        Student s;

        for (int i = 1; i <= count; i++)
        {

            string name;
            cout << "Enter Name : " << endl;
            cin >> name;
            storename.push_back(name);

            string course;
            cout << "Enter course : " << endl;
            cin >> course;
            storecourse.push_back(course);
        }
    }
}