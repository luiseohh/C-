#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers = {7,2,5,1,8,9,3,6,4};

    partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());

    for(const auto& elem : numbers) {cout << elem << " ";}
    cout << endl;

    return 0;
}