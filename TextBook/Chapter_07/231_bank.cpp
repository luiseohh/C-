#include<iostream>

using namespace std;

class bank{
private:
    int safe; // 금고
public:
    bank();
    void use_counter(int _in, int _out); // 입출금 창고
};

bank::bank(){
    safe = 1000; // 금고 초기 금액 설정
    cout << "initial safe : " << safe << endl;
    cout << endl;
}

void bank::use_counter(int _in, int _out){
    safe += _in;
    safe -= _out;

    cout << "Deposit : " << _in << endl;
    cout << "Withdrawal : " << _out << endl;
    cout << "Safe : " << safe << endl;
    cout << endl;
}

int main(){
    bank my_bank;

    my_bank.use_counter(0,20);
    my_bank.use_counter(50,0);
    my_bank.use_counter(100,50);

    return 0;
}