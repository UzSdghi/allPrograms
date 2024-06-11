#include<iostream>

using namespace std;

struct Calculator{
    int lv, rv;
    char op;
    void run(){
        cout << "Enter Operatin: ";
        cin >> lv;
        cin >> op;
        cout <<"Result: ";
        cin >> rv;
    }
    int mypow(int a, int b){
        if(b == 0){
            return 1;
        }else if(b == 1){
            return a;
        }else{
            return a * mypow(a, b-1);
        }
    }
    int calculator(){
        if(op == '+'){
            cout << lv + rv;
        }else if(op == '-'){
            cout << lv - rv;
        }else if(op == '*'){
            cout << lv * rv;
        }else if(op == '/'){
            cout << lv / rv;
        }else if(op == '^'){
            cout << mypow(lv, rv);
        }else{
            cout << "sorry bro, operation error! try these next time: + - * / ^ "; //i'm Happy
        }
        return 0;
    }
};
int main()
{
    Calculator c;
    c.run();
    c.calculator();
    return 0;
}
