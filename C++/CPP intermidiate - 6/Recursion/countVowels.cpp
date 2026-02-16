#include<bits/stdc++.h>
using namespace std;
// Count only Vowels in a Given String    
    int countV(string s, int vowel,int temp){
        if(temp == s.size()){
            return vowel;
        }
        
        if(s[temp] == 'a' || s[temp] == 'e' || s[temp] == 'i' ||s[temp] == 'o' ||s[temp] == 'u') vowel++;
        temp++;
        return countV(s,vowel,temp);

    }    

    int main(){
        string s = "hellojii";
        int vowel = 0;
        int temp = 0;
        cout<<countV(s,vowel,temp);
    

     return 0;
}