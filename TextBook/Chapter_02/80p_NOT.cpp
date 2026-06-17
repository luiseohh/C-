#include<iostream>
using namespace std;

int main(){
    unsigned int value = 0x00000000; // 0을 16잔수(hex)로 표현한 값

    value = ~value;
    cout << hex << value << endl; // hex -> 이제부터 출력하는 숫자가 16진수라는 것을 알려주기 위해

    return 0;
}