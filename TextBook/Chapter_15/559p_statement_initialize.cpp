#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

constexpr int even = 0;
constexpr int odd = 1;

int main(){
    array<int, 5> data_array{47, 23, 58, 10, 36};

    if(auto element = data_array[3] + data_array[4]; element > 20){
        cout << "The fourth element value is greater than 20.\n";
    } else{
        cout << "The fourth element value is less than or equal to 20.\n";
    }

    switch (auto element = data_array[4] % 2; element){
    case odd:
        cout << "The fifth element value is odd.\n";
        break;
    case even:
        cout << "The fifth element value is even.\n";
        break;
    }

    for(sort(data_array.begin(), data_array.end()); auto &&element : data_array){
        cout << element << ", ";
    }
    cout << endl;

    return 0;
    
}