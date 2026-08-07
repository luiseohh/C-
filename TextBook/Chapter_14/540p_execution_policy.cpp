#include<iostream>

using namespace std;

class class_obj{
public:
    class_obj(){
        cout << "Memory is allocated\n";
    };
    ~class_obj(){
        cout << "Memery is deleted\n";
    };
};

int main(){
    class_obj *unique_pointer = new class_obj;

    return 0;
}