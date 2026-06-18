#include<iostream>
#include<string>

using namespace std;

int main(){
    int customer_num = 0;

    cout << "오늘 방문 손님 : ";
    cin >> customer_num;

    string *bread = new string[customer_num];

    for(int i = 0; i < customer_num; i++){
        bread[i] = "빵_" + to_string(i); // to_string() 숫자를 문자열로 변환하는 함수
    }
    
    cout << endl << "--생산된 빵--" << endl;
    for(int i = 0; i < customer_num; i++){
        cout << *(bread + i) << endl;
    }

    delete[] bread;

    return 0;
}