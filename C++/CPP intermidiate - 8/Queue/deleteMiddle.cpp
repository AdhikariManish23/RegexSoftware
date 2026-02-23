#include<bits/stdc++.h>
using namespace std;
    // delete middle in a q 
    // for even  = 1 2 3 4  ans = 1 3 4  for odd = 1 2 3 4 5 ans = 1 2 4 5
    int main(){
     queue<int>q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        // q.push(5);
        
        vector<int>store;
        while(!q.empty()){
            store.push_back(q.front());
            q.pop();
        }

        int n = store.size();
        if(n % 2 == 1){

           int mid = n/2;
          
           for(int i = 0; i < n; i++){
            if(i != mid){
                q.push(store[i]);
            }
           }
        }
        else{
            
            int mid = (n/2) - 1;
             for(int i = 0; i < n; i++){
            if(i != mid){
                q.push(store[i]);
            }
           }
        }


        while(!q.empty()){
            cout<<q.front();
            q.pop();
        }

    

     return 0;
}