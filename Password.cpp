#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int passwordStrength(const string& password) {
    int strength = 0;
    int length = password.length();
    int numCount = 0;
    int specialCount = 0;
    int uppercaseCount = 0;
    int lowercaseCount = 0;

    for (char c : password) {
        if (isdigit(c)) {
            numCount++;
        } else if (isalpha(c)) {
            if (isupper(c)) {
                uppercaseCount++;
            } else {
                lowercaseCount++;
            }
        } else {
            specialCount++;
        }
    }
    if (length >= 6) strength += 20;
    if (numCount > 0) strength += 20;
    if (specialCount > 0) strength += 20;
    if (uppercaseCount > 0) strength += 20;
    if (lowercaseCount > 0) strength += 20;
    return strength;
}
int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;
    int strength = passwordStrength(password);
    cout << "your Password strength is: " << strength << "%" << endl;

    return 0;
}
