#include<iostream>
#include<tuple>
#include<map>

using namespace std;

struct data_struct{
    int number;
    string sentence;
    float decimal;
};

int main(){
    int numbers[3] = {1,2,3};
    auto [number0, number1, number2] = numbers;
    cout << "Array;s structured binding\n";
    cout << numbers[0] << " : " << number0 << endl;
    cout << numbers[1] << " : " << number1 << endl;
    cout << numbers[2] << " : " << number2 << endl;

    struct data_struct struct_obj {20, "struct", 10.5f};
    auto [number3, string0, decimal0] = struct_obj;
    cout << endl << "Struct's structured binding\n";
    cout << struct_obj.number << " : " << number3 << endl;
    cout << struct_obj.sentence << " : " << string0 << endl;
    cout << struct_obj.decimal << " : " << decimal0 << endl;

    tuple<int, char, double> tuple_obj{5,'C', 20.1f};
    auto [number4, char1, decimal1] = tuple_obj;
    cout << endl << "Tuple's structured binding\n";
    cout << get<0>(tuple_obj) << " : " << number4 << endl;
    cout << get<1>(tuple_obj) << " : " << char1 << endl;
    cout << get<2>(tuple_obj) << " : " << decimal1 << endl;

    map<int, string> map_obj;

    map_obj.insert({0, "Fir"});
    map_obj.insert({1, "Sec"});
    map_obj.insert({2, "Thr"});
    cout << endl << "Map's structured binding\n";
    for(auto [number5, string1] : map_obj){
        cout << "[" << number5 << "]" << map_obj[number5] << " : " << string1 << endl;
    }

    return 0;
}
