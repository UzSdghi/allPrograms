#include <iostream>
#include <string>
#include <regex> // Regular expression

using namespace std;

bool validateEmail(const string &email) {
    regex pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$"); //regular expression for a valid email address
    return regex_match(email, pattern); // checkpoint
}
int main() {
    string email;
    cout << "Enter an email address: ";
    cin >> email;

    if (validateEmail(email)) {
        cout << "The email address is valid." << endl;
    } else {
        cout << "The email address is invalid! enter a valid email adddress" << endl;
    }
    return 0;
}
