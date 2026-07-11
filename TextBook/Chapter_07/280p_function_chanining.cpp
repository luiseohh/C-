#include<iostream>
#include<string>

using namespace std;

class bank{
private:
    int safe;
    string bank_name;
public:
    bank(string name) : bank_name(name) {safe = 0;};
    ~bank(){};
    void use_counter(int _int, int _out);
    void transfer_account(int safe);
    void reset_account();
    int get_safe() {return safe;};
    bank& deposit_interest(int interest);
    bank& withdraw_utility(int utility);
    bank& withdraw_tax(int tax);
    string get_bank_name() {return bank_name;};
};

void bank::use_counter(int _in, int _out){
    safe += _in;
    safe -= _out;
    cout << bank_name << " treat - in : " << _in << ", out : " << _out << endl;
}

void bank::transfer_account(int safe){
    this->safe = safe;
    cout << bank_name << " to move account : " << safe << endl;
}

void bank::reset_account(){
    this->safe = 0;
    cout << bank_name << " account reset.\n";
}

bank& bank::deposit_interest(int interest){
    safe += interest;
    cout << bank_name << " interest payment : " << interest << endl;
    return *this;
}

bank& bank::withdraw_utility(int utility){
    safe-= utility;
    cout << bank_name << " utility bil payment : " << utility << endl;
    return *this;
}

bank& bank::withdraw_tax(int tax){
    safe -= tax;
    cout << bank_name << " tax payment : " << tax << endl;
    return *this;
}

int main(){
    bank rich_bank("rich bank"), global_bank("global bank");
    rich_bank.use_counter(50,10); // s.safe == 40
    cout << endl;

    global_bank.transfer_account(rich_bank.get_safe()); // g.safe == 40
    rich_bank.reset_account(); // s.safe == 0
    cout << endl;

    global_bank.deposit_interest(10).withdraw_utility(1).withdraw_tax(2); // 40 + 10 - 1 - 2 -> 47, g.safe == 47
    cout << endl;
    cout << global_bank.get_bank_name() << " balance : " << global_bank.get_safe() << endl;

    return 0;
}