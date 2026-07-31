#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> num = {3,8,1,6,2,7,5,4,9};
    
    int userInput;

    cout << "Find num : ";
    cin >> userInput;

    auto it = find(num.begin(), num.end(), userInput);

    if(it != num.end()) {cout << "Find\n";}
    else {cout << "Cant find\n";}

    return 0;
}