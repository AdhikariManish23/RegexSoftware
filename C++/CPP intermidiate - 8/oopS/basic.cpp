#include<bits/stdc++.h>
using namespace std;
class teacher{
    public:
    string name;
    string dept;

    void print(){
        cout<<name<<endl;
        cout<<dept<<endl;
    }
    void changename(string cname){
        name = cname;
    }
};    

    int main(){
        teacher t1;
        t1.name = "manish";
        t1.dept = "CS";
        t1.print();

        teacher t2;
        t2.name = "SURESH";
        t2.dept = "CS";
        t2.changename("kamlesh");   // kaise change ho rha ha yeah 
        t2.print();
        

     return 0;
}