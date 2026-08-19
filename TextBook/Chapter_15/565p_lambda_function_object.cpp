#include <iostream>

using namespace std;
const int loop_count = 5;
const int change_count = 5;

class vending_machine {
public:
    vending_machine(): price{450, 390, 11340, 900, 150}{};
    void stack_drink() {};

    void sale_sale_using_lambda_function_object(int payment[], int changes[]){
        auto calcu_changes = [&changes](int payment, int price)->int{
            int change = payment - price;
            changes[0] = change / 1000;
            change %= 1000;
            changes[1] = change / 500;
            change %= 500;
            changes[2] = change / 100;
            change %= 100;
            changes[3] = change / 50;
            change %= 50;
            changes[4] = change / 10;
            return payment - price;
        };

        for(int i = 0; i < loop_count; i++){
            cout << "Pay " << payment[i] << " won and " << price[i] << " chose a one price drink.\n";
            cout << "The money to  be received in return is " << calcu_changes(payment[i], price[i]) << "it is.\n";
            cout << "1000 won " << changes[0] << " pices "
                 << changes[1] << "pices, 100 won " << changes[2] << "pices, ";
            cout << "50 won " << changes[3] << "pices, 10 won "
                 << changes[4] << "pices, accepted.\n";
        }
    };

private:
    int price[loop_count];
};

int main(){
    vending_machine vending_machine_object = vending_machine();
    int payments[loop_count] = {1000, 500, 1500, 1000, 200};
    int changes[change_count] = {0, };

    cout << endl << "Use to lambda expresstion object\n";
    cout << "------------------------------------------\n";
    vending_machine_object.sale_sale_using_lambda_function_object(payments, changes);

    return 0;
}