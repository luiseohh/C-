#include<iostream>
#include<memory>

using namespace std;

class class_obj{
public:
    class_obj(){
        cout << "Memory is allocated\n";
    };
    ~class_obj(){
        cout << "Memory is deleted\n";
    };

    void print_out(){
        cout << "Call an object function\n";
    };
};

int main(){
    unique_ptr<class_obj> unique_pointer(new class_obj());
    unique_pointer->print_out();

    return 0;
}