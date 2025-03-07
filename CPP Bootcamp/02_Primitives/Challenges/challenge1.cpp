#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string teaType = "Green Tea"; // Tea type
    float pricePerKg = 150.75;      // Price per kilogram
    char rating = 'A';            // Rating

    // Display tea information with formatting using escape sequences
    cout << "Tea Information Display\n";
    cout << "Tea Type: \"" << teaType << "\"\n"; // Quotes around the tea name
    cout << "Price per Kg: " << pricePerKg << "\n";
    cout << "Rating: " << rating << "\n";

    return 0;
}
