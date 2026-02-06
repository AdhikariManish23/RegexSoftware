#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abscDJHFKSsadKJ";

    for (char &ch : s) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
    }

    cout << s << endl;
    return 0;
}
