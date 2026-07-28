#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> mySet;

    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);

    if(mySet.find(5) != mySet.end()) {cout << "5 is saved in set\n";}

    for(auto it = mySet.begin(); it != mySet.end(); it++){cout << *it << " ";}
    cout << endl;

    int size = mySet.size();
    cout <<"set size : " << size << endl;

    return 0;
}