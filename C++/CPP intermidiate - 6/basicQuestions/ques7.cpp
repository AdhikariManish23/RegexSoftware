#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rides;
    cout << "Enter number of rides booked: ";
    cin >> rides;

    double totalFare = 0;

    for (int i = 1; i <= rides; i++) {
        double distance;
        int type;
        double fare = 0;

        cout << "\nRide " << i << " Distance (in km): ";
        cin >> distance;

        cout << "Select Ride Type:\n";
        cout << "1. Bike (Rs.15/km)\n";
        cout << "2. Auto (Rs.25/km)\n";
        cout << "Enter choice: ";
        cin >> type;

        if (type == 1)
            fare = distance * 15;
        else if (type == 2)
            fare = distance * 25;
        else
            cout << "Invalid Ride Type\n";

        // Minimum charge
        if (distance < 3) {
            fare += 20;
        }

        totalFare += fare;
    }

    // Loyalty message
    if (rides > 5) {
        cout << "\nFrequent Rider – Loyalty Discount Applied\n";
    }

    // Discount
    if (totalFare > 300) {
        totalFare *= 0.85; // 15% discount
    }

    // Platform fee
    totalFare += 30;

    cout << fixed << setprecision(2);
    cout << "\nTotal Amount to be Paid: Rs. " << totalFare << endl;

    return 0;
}

