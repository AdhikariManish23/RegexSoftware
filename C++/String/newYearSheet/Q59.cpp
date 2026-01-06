#include <bits/stdc++.h>
using namespace std;
//  Good level of Question 


// Linear search to check if a character is special
bool linearSearch(const string &s, char key)
{
    for (char ch : s)
    {
        if (ch == key)
            return true;
    }
    return false;
}

// Function to store special characters and their frequency in a map
map<char, int> specialChar(string s)
{
    string special = "~!@#$%^&*()_+=-`{}:?><,./;[]";
    map<char, int> freq;

    for (char ch : s)
    {
        if (linearSearch(special, ch))
        {
            freq[ch]++; // count frequency
        }
    }
    return freq;
}

int main()
{
    string s = "m@ni@s%$h@";

    map<char, int> result = specialChar(s);

    // Print map all contents
    for (auto it : result)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}

// --------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// // Linear search to check if a character is special
// bool linearSearch( string s, char key)
// {
//     for (char ch : s)
//     {
//         if (ch == key)
//             return true;
//     }
//     return false;
// }

// // Function to store special characters and their frequency
// map<char, int> specialChar( string s)
// {
//     string special = "~!@#$%^&*()_+=-`{}:?><,./;[]";
//     map<char, int> freq;

//     for (char ch : s)
//     {
//         if (linearSearch(special, ch))
//         {
//             freq[ch]++;
//         }
//     }
//     return freq;
// }

// // Function to return the special character with highest frequency
// char getHighestFrequencyChar(map<char, int> freq)
// {
//     char result = '\0';
//     int maxValue = 0;

//     for (auto it : freq)
//     {
//         if (it.second > maxValue)
//         {
//             maxValue = it.second;
//             result = it.first;
//         }
//     }
//     return result;
// }

// int main()
// {
//     string s = "m@ni@s%$h@";

//     map<char, int> result = specialChar(s);


//      it prints only the highest frequency element


//     char highest = getHighestFrequencyChar(result);

//     if (highest == '0')
//         cout << "No special character found";
//     else
//         cout << highest;

//     return 0;
// }
