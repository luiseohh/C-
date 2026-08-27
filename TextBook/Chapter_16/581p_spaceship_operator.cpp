#include<iostream>
#include<compare>

using namespace std;

struct _tag{
    int number;
    char alphabat;
    auto operator<=>(const _tag &object) const{
        return number <=> object.number;
    }
};

using DATA = struct _tag;

DATA data_element[5] = { {4, 'a'}, {1, 'c'}, {8, 'b'}, {2, 'z'}, {4, 'd'} };

int main(){
    cout << boolalpha << "index 0 is bigger than index 3 : ";
    cout << ((data_element[0] <=> data_element[3]) > 0) << endl;

    cout << "index 1 is bigger index 2 : ";
    cout << (data_element[1] > data_element[2]) << endl;

    return 0;
}