#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Dog {
public:
    string name;
    int birthYear;
    Dog(string n, int bYear) : name(n), birthYear(bYear), score(0) {}
    int getAge() {
        time_t t = time(0);
        struct tm *now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        return currentYear - birthYear;
    }
    void bark() {
        cout << name << " says: Bark " << endl;
    }
    void learn() {
        score++;
    }
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << getAge() << " years old" << endl;
        cout << "Score: " << score << endl;
    }
private:
    int score;
};
int main() {
    string name;
    int birthYear;
    int command;
    cout << "Enter the name : ";
    getline(cin, name);
    cout << "Enter the age : ";
    cin >> birthYear;
    Dog myDog(name, birthYear);
    do {
        cout << "Enter 1 to bark, 2 to learn, 0 show information : ";
        cin >> command;

        if (command == 1) {
            myDog.bark();
        } else if (command == 2) {
            myDog.learn();
        }
    } while (command != 0);
    myDog.showData();
    return 0;
}
