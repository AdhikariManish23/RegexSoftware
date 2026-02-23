#include <bits/stdc++.h>
using namespace std;

int main()
{
    int passengers;
    cout << "Enter number of passengers: ";
    cin >> passengers;

    // cin.ignore(); // clear input buffer

    int totalFare = 0;
    int totalTickets = 0;

    cout << "\n--- Passenger Booking Details ---\n";

    for (int i = 1; i <= passengers; i++)
    {
        string name;
        int option, tickets;
        int fare = 0;

        cout << "\nPassenger " << i << " Name: ";
        cin>>name;

        cout << "Train Class:\n";
        cout << "1. Sleeper   --> ₹300\n";
        cout << "2. AC 3 Tier --> ₹800\n";
        cout << "3. AC 2 Tier --> ₹1200\n";
        cout << "Choose option: ";
        cin >> option;

        cout << "Number of tickets: ";
        cin >> tickets;

        cin.ignore(); // for next getline
        totalTickets += tickets;

        // Fare calculation
        if (option == 1)
            fare = 300 * tickets;
        else if (option == 2)
            fare = 800 * tickets;
        else if (option == 3)
            fare = 1200 * tickets;
        else
        {
            cout << "Invalid class selected\n";
            continue;
        }

        totalFare += fare;

        // Passenger-wise output
        cout << "Passenger: " << name << endl;
        cout << "Tickets: " << tickets << endl;
        cout << "Fare: ₹" << fare << endl;

        if (tickets > 6)
            cout << "Bulk Booking – Extra Verification Required\n";
    }

    cout << "\n--- Fare Summary ---\n";
    cout << "Total Fare: ₹" << totalFare << endl;

    // Discount
    if (totalFare > 5000)
    {
        int discount = (totalFare * 10) / 100;
        totalFare -= discount;
        cout << "Discount Applied (10%): -₹" << discount << endl;
    }

    // GST
    int gst = (totalFare * 5) / 100;
    int finalAmount = totalFare + gst;

    cout << "GST (5%): ₹" << gst << endl;
    cout << "Final Payable Amount: ₹" << finalAmount << endl;

    return 0;
}

// int main() {
//     int passengers;
//     cout << "Enter number of passengers: ";
//     cin >> passengers;

//     if (passengers > 6) {
//         cout << "Bulk Booking – Extra Verification Required\n";
//     }

//     string name;
//     int choice, tickets;
//     double totalFare = 0;

//     for (int i = 1; i <= passengers; i++) {
//         cout << "\nPassenger " << i << " Name: ";
//         cin >> name;

//         cout << "Select Train Class:\n";
//         cout << "1. Sleeper (Rs.300)\n";
//         cout << "2. AC 3 Tier (Rs.800)\n";
//         cout << "3. AC 2 Tier (Rs.1200)\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         cout << "Enter number of tickets: ";
//         cin >> tickets;

//         double fare = 0;

//         if (choice == 1)
//             fare = 300 * tickets;
//         else if (choice == 2)
//             fare = 800 * tickets;
//         else if (choice == 3)
//             fare = 1200 * tickets;
//         else
//             cout << "Invalid Class Selection\n";

//         totalFare += fare;
//     }

//     // Discount
//     if (totalFare > 5000) {
//         totalFare *= 0.90;  // 10% discount
//     }

//     // GST 5%
//     totalFare *= 1.05;

//     cout << fixed << setprecision(2);
//     cout << "\nFinal Payable Amount (including GST): Rs. " << totalFare << endl;

//     return 0;
// }
