#include<iostream>

using namespace std;

int main(){
    char char_value = 'A';
    int int_value = 123;
    double double_value = 13.456;

    char *char_pointer_value = &char_value;
    int *int_pointer_value = &int_value;
    double *double_pointer_value = &double_value;
    
    return 0;
}