#include<iostream>

using namespace std;

int main(){
    
    try{
        int input;
        cout << "정수 중 하나를 입력하세요 : ";
        cin >> input;

        if(input > 0){
            cout << "throw 1" << endl;
            throw 1; // 예외 1 발생 (정수 형식 예외)
            cout << "after throw 1" << endl;
        }

        if(input < 0){
            cout << "throw -1.0f" << endl;
            throw -0.1f; // 예외 1.0f 발생 )부동소수점 형식 예외)
            cout << "after throw 1" << endl;
        }

        if(input == 0){
            cout << "throw Z" << endl;
            throw 'Z'; // 예외 Z 발생 (문자 형식 예외)
            cout << "after throw Z" << endl;
        }
    }catch(int a){
        cout << "catch " << a << endl;
    } catch(float b){
        cout << "catch " << b << endl;
    } catch(char c){
        cout << "catch " << c << endl;
    }

    return 0;
}