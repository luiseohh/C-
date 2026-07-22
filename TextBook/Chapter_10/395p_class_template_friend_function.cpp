#include<iostream>

using namespace std;

template<typename T = int>
class data_package{
public:
    data_package(T fir) : fir(fir){}
    friend void print_friend_element(data_package<T>& data_obj){
        cout << "(Call friend class template) template parameters value : " << data_obj.fir << endl;
    }
private:
    T fir;
};

int main(){
    data_package<> template_inst1(5);
    data_package<string> template_inst2("String type, not class template initial value");

    print_friend_element(template_inst1);
    print_friend_element(template_inst2);

    return 0;
}