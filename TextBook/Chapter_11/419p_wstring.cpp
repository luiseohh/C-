#include<iostream>
#include<string>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    wstring korString = L"Hello";

    wcout << korString << endl;

    return 0;
}