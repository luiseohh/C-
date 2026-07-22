#include<iostream>

using namespace std;

template<typename Type1, typename Type2>
class data_package{
public:
    data_package(Type1 fir, Type2 sec) : fir(fir), sec(sec){}
    void print_out_element(){
        cout << "First element : " << fir << ", Second element : " << sec << endl;
    }
private:
    Type1 fir;
    Type2 sec;
};

template<typename T>
class data_package<string, T>{
public:
    data_package(string fir, T sec) : fir(fir), sec(sec){}
    void print_out_element(){
        cout << fir << " and " << sec << endl;
    }
private:
    string fir;
    T sec;
};


int main(){
    data_package<int, double> template_inst1(5, 10.5);
    data_package<string, int> template_inst2("string", 10);

    template_inst1.print_out_element();
    template_inst2.print_out_element();

    return 0;
}