#include <iostream>
#include <string>

using namespace std;

class dog {
private:
	int Age;
	string name;
	int score;
public:
	dog(string name, int Age) : name(name), Age(Age), score(0) {}
	int getyear(int currentyear, int Age)
	{
		return currentyear - Age;
	}
	void bark()
	{
		cout << name << "Says Woof \n";
	}
	void learn()
	{
		score++;
	}
	void showinfo(int currentyear , int Age)
	{
		cout << "Name : " << name << '\n';
		cout << "Age : " << getyear(currentyear, Age) << '\n';
		cout << "Score : " << score << '\n';
	}
};
int main()
{
	string name;
	int Age, currentyear;
	cout << "Enter Name and Age : ";
	cin >> name >> Age;
	cout << "enter the current year : ";
	cin >> currentyear;
	dog mydog(name, Age);
	mydog.getyear(currentyear, Age);
	int command;
	while (true)
	{
		cout << "Choose 1 to bark 2 to teach 0 to show the result : ";
		cin >> command;
		if (command == 1)
		{
			mydog.bark();
		}
		if (command == 2)
		{
			mydog.learn();
		}
		else if (command == 0)
		{
			mydog.showinfo(currentyear , Age);
			break;
		}
	}
	return 0;
}
