#include<iostream>

using namespace std;

int add(int _x, int _y){
    return (_x + _y);
}

int main(){
    int add_reeult = add(2, 3);

    cout << "add 함수 결과 : " << add_reeult << endl;

    return 0;
}