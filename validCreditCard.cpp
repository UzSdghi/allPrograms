#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<string, string> bankMap = {
    {"603799", "meli"},
    {"589210", "sepah"},
    {"627648", "saderat"},
    {"627961", "sanaat"},
    {"603770", "keshavarzi"},
    {"628023", "maskan"},
    {"627760", "post"},
    {"502908", "taavon"},
    {"627412", "eghtesad"},
    {"622106", "parsian"},
    {"502229", "pasargade"},
    {"627488", "karafarin"},
    {"621986", "saman"},
};
bool isValidDigit(char c) {
    return isdigit(c);
}
bool validPrefix(const vector<char>& cardNumber) {
    if (cardNumber.size() < 4)
        return false;
    string prefix(cardNumber.begin(), cardNumber.begin() + 6);
    return bankMap.find(prefix) != bankMap.end();
}
void displayCard(const vector<char>& cardNumber) {
    for (size_t i = 0; i < cardNumber.size(); ++i) {
        if (i > 0 && i % 4 == 0)
            cout << "-";
        cout << cardNumber[i];
    }
    cout << endl;
}
int main() {
    vector<char> cardNumber;
    char digit;
    while (cardNumber.size() < 16) {
        cout << "Enter digit " << cardNumber.size() + 1 << " : ";
        cin >> digit;
        if (!isValidDigit(digit)) {
            cout << "Invalid input. Please enter a digit (0-9)." << endl;
            continue;
        }
        cardNumber.push_back(digit);
        if (cardNumber.size() >= 4 && !validPrefix(cardNumber)) {
            cout << "Invalid card prefix. Please start again." << endl;
            cardNumber.clear();
            continue;
        }
        displayCard(cardNumber);
    }
    string prefix(cardNumber.begin(), cardNumber.begin() + 6);
    string bankName = bankMap[prefix];
    cout << "Card Number: ";
    displayCard(cardNumber);
    cout << "Bank: " << bankName << endl;
    return 0;
}
