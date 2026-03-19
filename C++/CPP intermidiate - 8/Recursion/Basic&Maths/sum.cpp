// #include <bits/stdc++.h>
// using namespace std;

// int sum(int n){
//     if(n <= 1){
//         return 1;
//     }
//     return n + sum(n - 1);
// }

// int main(){
//     int n = 5;
//     cout << sum(n);
//     return 0;
// }


// Alternative Approach

#include <bits/stdc++.h>
using namespace std;

void sumNum (int n,int sum){
  if(n <=0){
      cout<<sum;
      return ;
  }
int rem = n % 10;
sum += rem;
sumNum(n/10,sum);
}

int main() {

    sumNum(123,0);    
}