#include <iostream>
#include <vector>

using namespace std;
bool validateCardPrefix(string cardNumber) {
    vector<string> validPrefixes = {"6037", "5058", "6863"};
    for (const string& prefix : validPrefixes) {
        if (cardNumber.find(prefix) == 0) {
            return true;
        }
    }
    return false;
}
int main() {
    string cardNumber;
    vector<int> cardArray;
    while (cardArray.size() < 16) {
        cout << "Enter a digit for the card number: ";
        int digit;
        cin >> digit;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid digit." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }
        cardArray.push_back(digit);
        cout << "Entered card number digits: ";
        for (int num : cardArray) {
            cout << num << " ";
        }
        cout << endl;
        if (cardArray.size() >= 4) {
            string prefix;
            for (int i = 0; i < 4; i++) {
                prefix += to_string(cardArray[i]);
            }
            if (!validateCardPrefix(prefix)) {
                cout << "Invalid prefix number" << endl;
                cardArray.clear();
            }
        }
    }
    cout << "input completed." << endl;
    return 0;
}
