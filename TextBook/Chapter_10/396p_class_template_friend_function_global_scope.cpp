#include<iostream>

using namespace std;

template<typename T = int>
class data_package{
public:
    data_package(T fir) : fir(fir){}
    template<typename C>
    friend void printout_friend_element(C &data_obj);
private:
    T fir;
};

template<typename C>
void printout_friend_element(C &data_obj){
    cout << "(Call firend class templat) template parameters value : " << data_obj.fir << endl;
}

int main(){
    data_package<> template_inst1(5);
    data_package<string> template_inst2("String type, not class template initial value");

    printout_friend_element(template_inst1);
    printout_friend_element(template_inst2);

    return 0;
}