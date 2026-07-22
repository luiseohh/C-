#include<iostream>

using namespace std;

template<typename T = int> // initial value
class data_package{
public:
    data_package(T fir) : fir(fir){}
    void print_out_element(){
        cout << "Template parameter value : " << fir << endl;
    }
private:
    T fir;
};

int main(){
    data_package<> template_inst1(5);
    data_package<string> template_inst2("string data type, not class template initial value");

    template_inst1.print_out_element();
    template_inst2.print_out_element();

    return 0;
}