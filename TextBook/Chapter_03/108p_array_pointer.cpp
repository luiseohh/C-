#include<iostream>

using namespace std;

int main(){
    int lotto[45];

    for(int i = 0; i < 45; i++){
        lotto[i] = i + 1;
    }

    cout << "lotto[0] Address : " << &lotto[0] << endl;
    cout << "lotto[1] Address : " << &lotto[1] << endl;
    cout << "lotto[2] Address : " << &lotto[2] << endl;
    cout << "lotto[3] Address : " << &lotto[3] << endl;
    cout << "lotto[4] Address : " << &lotto[4] << endl;
    cout << "lotto[5] Address : " << &lotto[5] << endl;

    cout << "(lotto + 0) Address : " << lotto + 0 << endl;
    cout << "(lotto + 1) Address : " << lotto + 1 << endl;
    cout << "(lotto + 3) Address : " << lotto + 2 << endl;
    cout << "(lotto + 4) Address : " << lotto + 3 << endl;
    cout << "(lotto + 5) Address : " << lotto + 4 << endl;
    cout << "(lotto + 6) Address : " << lotto + 5 << endl;

    return 0;
}