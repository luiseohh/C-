#include<iostream>

using namespace std;

template<typename Type1, typename Type2>
class data_package{
public:
    template<typename Type3>
    class nested_class_data_package{
    public:
        nested_class_data_package(Type3 data) : nested_class_data(data){}
        Type3 get_element() {return nested_class_data;}
        Type3 nested_class_data;
    };

    template<typename Type4>
    class nested_class{
    public:
        nested_class(Type4 data) : nested_class_data(data){}
        void print_out_element(){
            cout << "Overlapping Class Data : " << nested_class_data << endl;
        }
    private:
        Type4 nested_class_data;
    };

    data_package(Type1 fir, Type2 sec) : fir(fir), sec(sec), internal_data(sec){}
    void print_out_element(){
        cout << "First element : " << fir <<", Second element : " << sec << endl;
        cout << "Overlapped class element : " << internal_data.get_element() << endl;
    }
private:
    Type1 fir;
    Type2 sec;
    nested_class_data_package<Type2> internal_data;
};

int main(){
    data_package<string, int> template_inst1("string", 10);
    data_package<string, int>::nested_class<int> template_inst2(500);

    cout << "Overlapping class's first legend\n";
    template_inst1.print_out_element();

    cout << endl << "Overlapping class's second legend\n";
    template_inst2.print_out_element();

    return 0;
}