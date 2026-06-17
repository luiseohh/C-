#include<iostream>
#include<bitset> // bitset<>() 때문에
using namespace std;

int main(){
    int a = 13;
    int b = 27;
    int c = a | b; // 비트 OR 연산
    
    cout << "a = " << bitset<8>(a) << " : " << a << endl;
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;

    // bitset<8>(a) -> 내가 가진 데이터 A를 0과 1로 이루어진 '8자리 2진수(비트)' 모양으로 변신시켜서 보여줘
    return 0;   
}