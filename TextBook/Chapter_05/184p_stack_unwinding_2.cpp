#include<iostream>

using namespace std;

void func_throw(){
    cout << endl;
    cout << "func_throw(), function inside\n";
    cout << "throw -1\n";
    throw -1;
    cout << "after throw -1\n";
}

void func_2(){
    cout << endl;
    cout << "func_2(), function inside\n";
    cout << "call func_throw()\n";
    func_throw();
    cout << "after func_throw()\n";
}

void func_1(){
    cout << endl;
    cout << "func_1(), function inside\n";
    cout << "call func_2()\n";
    func_2();
    cout << "after func_2()\n";
}

int main(){
    cout << "main inside\n";

    try{
        cout << "call func_1()\n";
        func_1();
    } catch(int exec){
        cout << endl;
        cout << "catch " << exec << endl;
    }

    return 0;
}