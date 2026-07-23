#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1("Hello");
    cout << str1 << endl;

    for(char i : str1) {cout << i << endl;};

    return 0;
}