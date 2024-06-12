#include<iostream>
#include<cstring>

using namespace std;

struct isValidCard{
    char prefix[4];
    char bank[30];
};
isValidCard vcs[4];
void info(){
  strcpy(vcs[0].prefix, "5894");
  strcpy(vcs[0].bank, "Refah Kargaran");
  strcpy(vcs[1].prefix, "6037");
  strcpy(vcs[1].bank, "Saderat");
  strcpy(vcs[2].prefix, "6362");
  strcpy(vcs[2].bank, "Ayandeh");
  strcpy(vcs[3].prefix, "6221");
  strcpy(vcs[3].bank, "Parsian");
}
struct aCard{
    char number[16];
    char bank[30];
    bool isValid(){
        for(int i = 0; i < 4; i++){
            if(!strncmp(number, vcs[i].prefix,4)){
                strcpy(bank, vcs[i].bank);
                return true;
            }
        }
        return false;
    }
};
int main(){
  info();
    aCard card;
    cout << "Enter Card Number: ";
    cin >> card.number;
    cout << endl;
    if(card.isValid()){
        cout << "Bank name is: " << card.bank;
    }else{
        cout << "Invalid info try again!";
    }
    return 0;
}
