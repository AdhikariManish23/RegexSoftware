#include<bits/stdc++.h>
using namespace std;
class teacher{
    public:
    string name;
    string dept;

    void print(vector<string>storeName){
        for(auto x : storeName){
            cout<<x<<" ";
        }
    }
    void print2(vector<string>storeDept){
        for(auto x : storeDept){
            cout<<x<<" ";
        }
    }
   
};    

    int main(){
       vector<string>storeName;
       vector<string>storeDept;
       
       teacher t1;

        for(int i = 1; i<= 2; i++){
            string n;
            string d;
            cout<<"enter tname"<<endl;
            cin>>n;
            cout<<"enter dname"<<endl;
            cin>>d;

            storeName.push_back(n);
            storeDept.push_back(d);

            t1.name =n;
            t1.dept =d;
        }

        t1.print(storeName);
        t1.print2(storeDept);
       
     return 0;
}