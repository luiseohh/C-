#include<iostream>

using namespace std;

template<typename Type1, typename Type2>
class data_package{
public:
    data_package(Type1 fir, Type2 sec) : fir(fir), sec(sec){}
    void print_out_element(){
        cout << "first element : " << fir << ", second element : " << sec <<endl;
    }
private:
    Type1 fir;
    Type2 sec;
};

int main(){
    //data_package template_inst1(5, 10.5); C++17표준 이후 부터는 가능
    //data_package template_inst2("string", 10);
    data_package<int, double> template_inst1(5, 10.5);
    data_package<string, int> template_inst2("string", 10);

    template_inst1.print_out_element();
    template_inst2.print_out_element();

    return 0;
}