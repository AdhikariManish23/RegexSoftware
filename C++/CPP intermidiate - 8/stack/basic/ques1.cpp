#include<bits/stdc++.h>
using namespace std;
//Question :  2 string leni hai usko stack mai daal kr ek ans naam ki new string mai store krwa k print krwana hai 
int main() {
    string s = "Dog";
    string s2 = "cat";
    
    stack<char>st;
    
    for(auto ch : s){
        st.push(ch);
    }
    for(auto ch : s2){
        st.push(ch);
    }
    string ans = "";

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    
    cout<<ans;
    
    
}