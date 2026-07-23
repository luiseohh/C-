#include<iostream>
#include<string>

using namespace std;

int main(){
    string str  = "Hello, World!";
    cout << "Original string : " << str << endl;

    str.replace(7,5,"C++");
    cout << "Replaced string : " << str << endl;

    return 0;
}