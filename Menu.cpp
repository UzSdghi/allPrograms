#include <iostream>

using namespace std;

const float vat = 0.09;

struct Food {
	char name[225];
	int price;
};

struct Drink {
	char name[225];
	int price;
};

struct Salad {
	char name[225];
	int price;
};

Food foods[3] = { {"Kebab", 51200}, {"Rice", 84340}, {"Sushi", 12350} };
Drink drinks[3] = { {"soda", 1200}, {"water", 4340}, {"dogi", 2350} };
Salad salads[3] = { {"fasl", 200}, {"shirazi", 340}, {"caisar", 350} };

int main() {
	cout << "*********************MENU*******************" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "code : " << i << ":" << endl;
		cout << "name : " << foods[i].name << endl;
		cout << "price : " << foods[i].price << endl;

		}for (int i = 0; i < 3; i++) {
		cout << "code : " << i << ":" << endl;
		cout << "name : " << drinks[i].name << endl;
		cout << "price : " << drinks[i].price << endl;

		}for (int i = 0; i < 3; i++) {
		cout << "code : " << i << ":" << endl;
		cout << "name : " << salads[i].name << endl;
		cout << "price : " << salads[i].price << endl;
	}int setFood, setDriink, setSalad;
	cout << "*********************Choose*******************" << endl;
	cin >> setFood >> setDriink >> setSalad;
	int total = foods[setFood].price + drinks[setDriink].price + salads[setSalad].price;
	cout << "total : " << total << endl;
	cout << "total including VAT : " << total * (1 + vat) << endl;
	return 0;
}
