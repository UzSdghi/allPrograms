#include <iostream>

using namespace std;

class Time {
public:
	int h, m, s;
	void getTime() {
		cout << "Enter hour: ";
		cin >> h;
		cout << "Enter minute: ";
		cin >> m;
		cout << "Enter second: ";
		cin >> s;
	}
	void validTimeFormat() {
		if ((h <= 23 && h >= 0) && (m <= 59 && m >= 0) && (s <= 59 && s >= 0)) {
			cout << "valid time entered." << endl;
		}
		else {
			cout << "invalid time entered." << endl;
		}
	}
	void diffrence(int a, int b) {
		int diff = 0;
		if (a > b) {
			diff = a - b;
		}
		else {
			diff = b - a;
		}
		int hs = diff / 3600;
		int ms = (diff % 3600) / 60;
		int ss = (diff % 3600) % 60;
		cout << hs << ":" << ms << ":" << ss;
	}
	void printTime() {
		 cout << h << ":" << m << ":" << s;
	}
	int convertToss() {
		return h*3600 + m*60 + s;
	}
};
int main() {
	Time t1, t2, diff;
	t1.getTime();
	t2.getTime();
	t1.validTimeFormat();
	t2.validTimeFormat();
	t1.convertToss();
	t2.convertToss();
	diff.diffrence(t1.convertToss(), t2.convertToss());
	diff.printTime();
	return 0;
}

