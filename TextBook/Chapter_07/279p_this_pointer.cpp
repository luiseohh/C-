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
    void use_counter(int _in, int _out);
    void transfer_account(int safe);
    void reset_account();
    int get_safe() {return safe;};
    };

    void bank::transfer_account(int safe){
        this->safe = safe;
        cout << bank_name << " to account transfer : " << safe << endl;

    };

    void bank::use_counter(int _in, int _out){
        safe += _in;
        safe -= _out;
        cout << bank_name << " treat - in : " << _in << ", out : " << _out << endl;
    };

    void bank::reset_account(){
        this->safe = 0;
        cout << bank_name << "reset account\n";
    };

int main(){
    bank rich_bank("rich bank"), global_bank("global bank");
    rich_bank.use_counter(50, 10); // safe == 40
    
    global_bank.transfer_account(rich_bank.get_safe());
    rich_bank.reset_account();

    return 0;
}