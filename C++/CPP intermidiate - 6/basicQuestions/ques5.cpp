#include <bits/stdc++.h>
using namespace std;

int main()
{

    int student;
    cout << "Enter Number of Student = ";
    cin >> student;
    string name;
    int math, science, hindi, english, social;
    int total;
    float percent;
    int topper = 0;
    string topperName;

    for (int i = 0; i < student; i++)
    {

        cout << "Enter Student Name = ";
        cin >> name;
        cout << "Enter Mathematics Marks = ";
        cin >> math;
        cout << "Enter Science Marks = ";
        cin >> science;
        cout << "Enter Hindi Marks = ";
        cin >> hindi;
        cout << "Enter English Marks = ";
        cin >> english;
        cout << "Enter Social Science Marks = ";
        cin >> social;
        total = math + science + hindi + english + social;
        cout << "Student Total Marks = " << total << endl;
        percent = (total * 100) / 500;
        cout << "Student Percentage = " << percent << endl;
        if (percent > topper)
        {
            topper = percent;
            topperName = name;
        }
    }
    cout << "Topper = " << topperName << endl;
    cout << "Percentage = " << topper;
    return 0;
}