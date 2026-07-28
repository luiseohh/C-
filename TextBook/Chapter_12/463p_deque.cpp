#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> myDeque;
    
    myDeque.push_back(2);
    myDeque.push_back(3);
    myDeque.push_back(4);

    myDeque.push_front(1);
    myDeque.push_front(0);
    
    cout << "Print deque : ";
    for(const int& value : myDeque){cout << value << " ";}
    cout << endl;

    myDeque.pop_front();
    myDeque.pop_back();

    cout << "After delete print : ";
    for(const int& value : myDeque){cout << value << " ";}
    cout << endl;

    cout << "deque size : " << myDeque.size() << endl;

    cout << "deque is empty ? " << (myDeque.empty() ? "Yes" : "No") << endl;

    cout << "deque's first element : " << myDeque.front() << endl;

    cout << "deque's last element : " << myDeque.back() << endl;

    return 0;
}