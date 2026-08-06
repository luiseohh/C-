#include<iostream>
#include<functional>
#include<string>

using namespace std;

void function_pointer(int input){
    cout << "Function pointer target function : " << input << endl;
}

struct functor{
    void operator()(char functor_prefix){
        cout << "Functor : " << functor_prefix << endl;
    }
};

class class_object{
public:
    class_object(string init_string) : class_obj_name(init_string){}

    void std_function_call_member(string contents){
        cout << "Class member function objectfication (" << class_obj_name << ") : "
             << contents << endl;
    }
private:
    string class_obj_name;
};

int main(){
    class_object class_obj("Class that holds the calling object");
    functor functor_obj;

    function<void(int)> func_pointer = function_pointer;
    function<void(functor&, char)> functor_func = &functor::operator();
    function<void(double)> lambda_func = [](double input) {cout << "Lambda function : " << input << endl;};
    function<void(class_object&, string)> member_func = &class_object::std_function_call_member;

    func_pointer(10);
    functor_func(functor_obj, 'A');
    lambda_func(0xa8);
    member_func(class_obj, "Output");

    return 0;
}