#include<iostream>

using namespace std;

int main(){
    try{
        int input;
        cout << "enter : ";
        cin >> input;

        if(input > 0){
            cout << "throw 1" << endl;
            throw 1;
            cout << "after throw 1" << endl;
        } else if(input < 0){
            cout << "throw -0.1f" << endl;
            throw -0.1f;
            cout << "after throw 1" << endl;
        } else if(input == 0){
            cout << "throw Z" << endl;
            throw 'Z';
            cout << "after throw Z" << endl;
        }
    } catch(int a){
        cout << "catch " << a << endl;
    } catch(...){
        cout << "catch all" << endl;
    }

    return 0;
}