#include<iostream>

using namespace std;

template<typename doll>
void find_doll(doll doll_name){
    cout << " " << doll_name << " is ";
}

template<typename doll, typename... dolls>
void find_doll(doll doll_name, dolls...  doll_list){
    cout << " " << doll_name << " inside ";
    find_doll(doll_list...);
}

int main(){
    cout << "First matrosica : ";
    find_doll("L", "M", "S");
    cout << "in\n\n";

    cout << "Second matrosica : ";
    find_doll("LL", "L", "M", "S", "SS");
    cout << "in\n";

    return 0;
}