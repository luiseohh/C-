#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int a_prefix;
    int b_postfix;

    a_prefix = ++a; // 전위 연산자
    b_postfix = b++; // 후위 연산자

    cout << "a = " << a << ", " << "a_prefix = " << a_prefix << endl;
    cout << "b = " << b << ", " << "b_profix = " << b_postfix << endl;

    return 0;
}