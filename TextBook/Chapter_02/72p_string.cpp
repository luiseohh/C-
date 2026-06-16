#include<iostream>
// #include<string> -> iostream 헤더 파일에 string도 포함됨
using namespace std;

int main(){
    string string_value("Hello");
    cout << string_value << endl;
    string_value = "World!";
    cout << string_value << endl;

    return 0;
}