#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 5> myArray;

    myArray = {1,2,3,4,5};

    cout << "Output array : ";
    for(const int& element : myArray) {cout << element << " ";}
    cout << endl;

    cout << "Array size : " << myArray.size() << endl;
    cout << "First array's element : " << myArray[0] << endl;

    myArray[1] = 10;

    cout << "changed array : ";
    for(int i = 0; i < 5; i++) {cout << myArray[i] << " ";}
    cout << endl;

    return 0;
}