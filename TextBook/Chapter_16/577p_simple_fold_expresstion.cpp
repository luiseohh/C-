#include<iostream>

using namespace std;

template<typename... numbers>
double unary_left(numbers... num_list){return (... / num_list);}

template<typename... numbers>
double unary_right(numbers... num_list){return (num_list / ...);}

template<typename... numbers>
double binary_left(numbers... num_list){return (10.0 / ... / num_list);}

template<typename... numbers>
double binary_right(numbers... num_list){return (num_list / ... / 10.0);}

int main(){
    cout << "Unary left fold expresstion : " << unary_left(1.0,2.0,3.0,4.0,5.0,6.0) << endl;
    cout << "Unary right fold expresstion : " << unary_right(1.0,2.0,3.0,4.0,5.0,6.0) << endl;
    cout << "Binary left fold expresstion : " << binary_left(1.0,2.0,3.0,4.0,5.0,6.0) << endl;
    cout << "Binary right fold expresstion : " << binary_right(1.0,2.0,3.0,4.0,5.0,6.0) << endl;

    return 0;
}