#include<iostream>
#include<string>

using namespace std;

void check_found(string::size_type n){
    if(n == string::npos) {cout << "not found\n";}
    else{cout << "found index : " << n << endl;}
}

int main(){
    string::size_type n;
    string str = "This is an example of a standard string.";

    n = str.find("example");
    check_found(n);

    n = str.find("is");
    check_found(n);

    n = str.find("is", 4);
    check_found(n);

    n = str.find('h');
    check_found(n);

    n = str.find('k');
    check_found(n);

    return 0;
}