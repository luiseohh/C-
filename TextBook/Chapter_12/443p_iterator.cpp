#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;

    for(int i = 0; i < 5; i++){vec.push_back(i);}

    vector<int>::iterator it = vec.begin();

    cout << *it << endl;
    cout << *(it +1) << endl;
    cout << *(it +2) << endl;
    cout << *(it +3) << endl;
    cout << *(it +4) << endl;

    return 0;
}
