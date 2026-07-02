#include<iostream>

using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        cout << "i : " << i << endl;
        if(i == 5){
            cout << "braek 로 반복문 탈출" << endl;
            break;
        }
    }

    cout << "반복문 종료" << endl;

    return 0;
}