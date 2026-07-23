#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "Hello";
    if(s1 == s2) {cout << "same\n";}

    s1 = "Hello";
    s2 = "World";
    if(s1 != s2) {cout << "not same\n";}

    return 0;
}