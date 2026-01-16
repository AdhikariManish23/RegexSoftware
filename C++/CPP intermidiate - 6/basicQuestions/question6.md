#include<bits/stdc++.h>
using namespace std;

int main(){
    int rides;
    cout<<"Enter Number of Rides to Book \n";
    cin>>rides;
    
    if(rides <= 0){
        cout<<"No rides Booked. Thank you For using Rapido!";
        return 0;
    }
    
    double totalFare = 0;
    double totalDistance = 0;
    
    for(int i = 1; i<= rides; i++){
        int rideType;
        double distance;
        
        cout<<"Enter Ride Type : \n ";
        cout<<"1. Bike - 50/km \n";
        cout<<"2. Auto - 80/km \n";
        cout<<"3. Cab  - 50/km \n";
        cout<<"4. Delivery - 50/km \n";
        
    }
}