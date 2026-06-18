#include<iostream>

using namespace std;

int main(){
    int *pt_int_value = new int[15];

    for(int i = 0; i < 5; i++){
        pt_int_value[i] = i;
    }

    for(int i = 0; i < 5; i++){
        cout << pt_int_value[i] << endl;
    }

    delete[] pt_int_value;
    
    return 0;
}