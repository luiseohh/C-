#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> myList;

    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);

    myList.push_front(1);
    myList.push_front(0);

    cout << "Print list : ";
    for(const int& value : myList){cout << value << " ";}
    cout << endl;

    myList.pop_front();
    myList.pop_back();

    cout << "After delete and print : ";
    for(const int& value : myList) {cout << value << " ";}
    cout << endl;

    cout << "List size : " << myList.size() << endl;

    cout << "List is empty ? => " << (myList.empty() ? "Yes" : "No") << endl;
    
    return 0;
}