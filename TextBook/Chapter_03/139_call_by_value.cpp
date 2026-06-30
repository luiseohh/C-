#include<iostream>

using namespace std;

void swap(int a, int b){
    cout << "[swap func] before swap, a : " << a << " b : " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "[swap func] after swap, a : " << a << " b : " << b << endl;
}

int main(){
    int a = 5;
    int b = 10;

    cout << "[main] before swap, a : " << a << " b : " << b << endl;

    swap(a, b);

    cout << "[main] after swap, a : " << a << " b : " << b << endl;

    return 0;
}