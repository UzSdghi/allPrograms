#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int mileage;
public:
    Car(string brand, string model, int mileage) : brand(brand), model(model), mileage(mileage) {}

    void drive(int Miles) {
        mileage += Miles;
    }

    void showData() {
        cout << "****************" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "mileage driven: " << mileage << "miles" << endl;
        cout << "****************" << endl;
    }
};
int main() {
    string brand, model;
    int mileage;

    cout << "Enter brand: ";
    getline(cin >> ws, brand); // or a string var could be used

    cout << "Enter model: ";
    getline(cin >> ws, model); // so as above

    cout << "Enter the mileage driven: ";
    cin >> mileage;

    Car myCar(brand, model, mileage);

    int additionalmileage;
    cout << "Enter the additional mileage: ";
    cin >> additionalmileage;

    myCar.drive(additionalmileage);
    myCar.showData();

    return 0;
}
