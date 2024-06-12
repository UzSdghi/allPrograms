#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FoodItem {
public:
    string name;
    double price;

    FoodItem(string n, double p) : name(n), price(p) {}
};

class Order {
public:
    vector<FoodItem> items;
    double totalPrice;
    double taxRate;

    Order(double tax) : totalPrice(0), taxRate(tax) {}

    void addItem(FoodItem item) {
        items.push_back(item);
        totalPrice += item.price;
    }

    double calculateTotal() {
        return totalPrice * (1 + taxRate / 100);
    }

    void printInvoice() {
        cout << "Invoice:" << endl;
        for (const auto& item : items) {
            cout << item.name << ": " << item.price << endl;
        }
        cout << "Total before tax: " << totalPrice << endl;
        cout << "Total after " << taxRate << "% tax: " << calculateTotal() << endl;
    }
};

int main() {
    int numberOfItems;
    cout << "How many orders do you have? : ";
    cin >> numberOfItems;

    vector<FoodItem> menu;
    for (int i = 0; i < numberOfItems; i++) {
        string name;
        double price;
        cout << "Your order is : " << i + 1 << ": ";
        cin >> name;
        cout << "price of your order : " << name << ": ";
        cin >> price;
        menu.push_back(FoodItem(name, price));
    }
    double taxRate;
    cout << "suggested tax rate is : ";
    cin >> taxRate;
    Order order(taxRate);
    char moreItems;
    do {
        int itemNumber;
        cout << "Enter the item number to add to the order: ";
        cin >> itemNumber;
        if (itemNumber > 0 && itemNumber <= numberOfItems) {
            order.addItem(menu[itemNumber - 1]);
        }
        else {
            cout << "Invalid item number." << endl;
        }
        cout << "Do you want to add more items? (y/n): ";
        cin >> moreItems;
    } while (moreItems == 'y' || moreItems == 'Y');

    order.printInvoice();
    return 0;
}
