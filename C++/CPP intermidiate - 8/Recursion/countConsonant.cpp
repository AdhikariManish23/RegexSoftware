#include<bits/stdc++.h>
using namespace std;
// Count only Vowels in a Given String    
    int countV(string s, int conso,int temp){
        if(temp == s.size()){
            return conso;
        }
        
        if(s[temp] != 'a' && s[temp] != 'e' && s[temp] != 'i' &&s[temp] != 'o' &&s[temp] != 'u') conso++;
        temp++;
        return countV(s,conso,temp);

    }    

    int main(){
        string s = "namaste";
        int conso = 0;
        int temp = 0;
        cout<<countV(s,conso,temp);
    

     return 0;
}