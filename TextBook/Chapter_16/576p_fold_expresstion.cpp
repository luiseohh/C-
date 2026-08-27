#include <iostream>

using namespace std;

template<typename doll>
doll show_doll(doll doll_name){return " " + doll_name + " inside ";}

template<typename... dolls>
string find_doll(dolls... doll_list){ return (show_doll(doll_list) + ...);}

int main(){
    cout << "First one ";
    cout << find_doll(string("L"), string("M"), string("S"));
    cout << "in it.\n\n";

    cout << "Secound one ";
    cout << find_doll(string("LL"), string("L"), string("M"), string("S"), string("SS"));
    cout << "in it\n";

    return 0;
}