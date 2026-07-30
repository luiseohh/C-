#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers = {8,3,1,7,4,5,9,2,6};

    sort(numbers.begin(), numbers.end());

    int target;
    cout << "chose number : ";
    cin >> target;

    bool found = binary_search(numbers.begin(), numbers.end(), target);

    if(found){cout << "find\n";}
    else{cout << "not saved\n";}

    return 0;
}