#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s;

    int getNum(int min = 0, int max = 59) {
        int num;
        do {
            cin >> num;
        } while (num < min || num > max);
        return num;
    }

    Time() {
        h = getNum(0, 23);
        m = getNum();
        s = getNum();
    }

    Time(int t) {
        h = t / 3600;
        m = (t % 3600) / 60;
        s = (t % 3600) % 60;
    }

    int getseconds() {
        return h * 3600 + m * 60 + s;
    }

    void print() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

Time diffrent(Time t1, Time t2) {
    if (t1.getseconds() > t2.getseconds()) {
        return Time(t1.getseconds() - t2.getseconds());
    }
    return Time(t2.getseconds() - t1.getseconds());
}

int main() {
    cout << "Enter First clock (h/m/s) :";
    Time t1;
    cout << "Enter Second clock (h/m/s) :";
    Time t2;
    Time d = diffrent(t1, t2);
    d.print();
    return 0;
}
