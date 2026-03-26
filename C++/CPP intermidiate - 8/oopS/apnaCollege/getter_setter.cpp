#include<bits/stdc++.h>
using namespace std;
    
class Student {
    // Without any access modifier it behave like PRIVATE 
    string name;
    float cgpa;

    public:
    void setName(string nameVal){  // if the parameter have same variable like (string name )
        name = nameVal;
        // this->name = name;  // in c++ we use this keyword like this 
    }

    void setCgpa(float cgpaVal){ // (string cgpa)
        cgpa = cgpaVal;
        // this->cgpa = cgpa
    }    

    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }


};

    int main(){
    
        Student s1;
        s1.setName("mansih");
        s1.setCgpa(7.8);

        cout<<s1.getName()<<endl;
        cout<<s1.getCgpa()<<endl;

}