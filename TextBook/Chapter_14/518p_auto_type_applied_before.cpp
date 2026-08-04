#include<iostream>
#include<map>
#include<array>

using namespace std;

map<char, array<int, 4>> auto_type_ex;
map<int, array<double, 3>> auto_type_ex2;

void build_map(){
    array<int, 4> array_a = {1,2,3,4};
    auto_type_ex.insert({'a', array_a});
    
    array<int, 4> array_b = { 11, 21, 31, 41 };
    auto_type_ex.insert({ 'b', array_b });

    array<int, 4> array_c = { 12, 22, 32, 42 };
    auto_type_ex.insert({ 'c', array_c });

    array<int, 4> array_d = { 13, 23, 33, 43 };
    auto_type_ex.insert({ 'd', array_d });

    array<double, 3> array_e = { 3.0, 4.0, 5.0 };
    auto_type_ex2.insert({ 1, array_e});

    array<double, 3> array_f = { 3.1, 4.1, 5.1 };
    auto_type_ex2.insert({ 2, array_f });

    array<double, 3> array_g = { 3.2, 4.2, 5.2 };
    auto_type_ex2.insert({ 3, array_g });

    array<double, 3> array_h = { 3.3, 4.3, 5.3 };
    auto_type_ex2.insert({ 4, array_h });
}

int main(){
    build_map();

    //map<char, array<int, 4>>::iterator iter;
    for(auto iter : auto_type_ex){/*do something*/}

    //map<int, array<double, 3>>::iterator iter2
    for(auto iter2 : auto_type_ex2){/*do something*/}

    /*map<int, array<int, 4>>::iterator iter3;
    for(iter3 = auto_type_ex.begin(); iter3 != auto_type_ex.end();iter++){do something}
    => Error due to type mismatch */

    return 0;
}