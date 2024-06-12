#include <iostream>
#include <string>
#include <regex> //regular expression library for phone number format

using namespace std;

bool validNumber(const string &phoneNumber) {
    regex pattern("\\b(\\+98|0)?9\\d{9}\\b"); // phone number pattern
    return regex_match(phoneNumber, pattern);
}
int main() {
    string phoneNumber;
    cout << "Enter phone number: ";
    cin >> phoneNumber;
    if (validNumber(phoneNumber)) {
        cout << "The phone number is a valid" << endl;
    } else {
        cout << "The phone number is a invalid! enter a valid phone number" << endl;
    }
    return 0;
}
