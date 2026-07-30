#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5};

    cout << "Find number : ";
    int target;
    cin >> target;

    vector<int>::iterator it = find(numbers.begin(), numbers.end(), target);

    if(it != numbers.end()) {cout << "Find index : " << distance(numbers.begin(), it) << endl;}
    else {cout << "cant find";}

    return 0;
}