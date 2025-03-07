/*Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Example stock value: 5 (binary 101) means Green and Oolong are in stock
    int stock = 5;

    // Prompt user for tea type
    cout << "Enter the tea type (1 for Green, 2 for Black, 4 for Oolong): ";

    // Read user input
    int tea_type;
    cin >> tea_type;

    // Map tea_type to tea name for user-friendly output
    string tea_name;
    if (tea_type == 1) {
        tea_name = "Green tea";
    } else if (tea_type == 2) {
        tea_name = "Black tea";
    } else if (tea_type == 4) {
        tea_name = "Oolong tea";
    }

    // Check availability using bitwise AND and display result
    if ((stock & tea_type) == tea_type) {
        cout << tea_name << " is in stock." << endl;
    } else {
        cout << tea_name << " is not in stock." << endl;
    }

    return 0;
}
