#include<bits/stdc++.h>
using namespace std;
    
class Student{

    public:
    // Properties
    string sname;
    string scourse;
    int fees;
    int duration;

    // Methods
    void changeName(string updateName){
        sname = updateName;
    }

    void changeCourse(string updateCourse){
        scourse = updateCourse;
    }

    void printDetails(){
        cout<<"Student Details : "<<endl;
        cout<<"Name - "<<sname<<endl;
        cout<<"Course - "<<scourse<<endl;
        cout<<"Fees - "<<fees<<endl;
        cout<<"Duration - "<<duration<<endl;
    }
};
    int main(){
        Student s;

        s.sname = "manish";
        s.scourse = "mern";
        s.fees = 10000;
        s.duration = 8;
        s.changeName("anuj");
        s.changeCourse("java");

        s.printDetails();
     return 0;
}