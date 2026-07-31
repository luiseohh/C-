#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve(vector<int>& num){
    for(auto& elem : num) {
        if(elem % 2 != 0) {cout << elem << " ";}
    }
}

int main(){
    vector<int> num = {2,7,1,8,3,6,4,5,9};

    solve(num);

    return 0;
}