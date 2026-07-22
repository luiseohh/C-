#include<iostream>

using namespace std;

template<typename U>
class caller{
public:
    caller() : obj(nullptr){}
    void set_obj(U *obj_ptr){obj = obj_ptr;}
    void printout_friend_obj(){
        cout << "(Call friend class template) template parameters value : " << obj->fir << endl;
    }
private:
    U *obj;
};

template<typename T = int>
class data_package{
public:
    data_package(T fir) : fir(fir){}
    friend caller<data_package>;
private:
    T fir;
};

int main(){
    caller<data_package<>> caller_int_obj;
    caller<data_package<string>> caller_string_obj;

    data_package<> template_inst1(5);
    data_package<string> template_inst2("String data type, not clss template initial value");

    caller_int_obj.set_obj(&template_inst1);
    caller_string_obj.set_obj(&template_inst2);
    caller_int_obj.printout_friend_obj();
    caller_string_obj.printout_friend_obj();

    return 0;
}