#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

template<typename T>
void print_vector_all(const vector<T>& vec){
    for(const auto& element : vec) {cout << element << " ";}
    cout << endl;
}

int main(){
    vector<int> vec = {7,6,3,5,4,1,2,0,8};

    sort(vec.begin(), vec.end(), greater<int>());
    print_vector_all(vec);

    return 0;
}