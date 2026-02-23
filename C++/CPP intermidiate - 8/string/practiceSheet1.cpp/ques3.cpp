#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "apple";
    int vow = 0;
    int cons = 0;
    for(auto x : s){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                vow++;
        }
        else{
            cons++;
        }
    }

    cout<<"vowel "<<vow<<endl;
    cout<<"consonant "<<cons;
}

// Similar to this Question you have to remove vowels from a sentenece