#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> myQue;

    myQue.push(1);
    myQue.push(2);
    myQue.push(3);

    cout << "Queue front : " << myQue.front() << endl;
    cout << "Queue back : " << myQue.back() << endl;

    myQue.pop();

    cout << "After pop, front : " << myQue.front() << endl;
    cout << "After pop, back : " << myQue.back() << endl;

    cout << "Queue is empty ? " << (myQue.empty() ? "Yes" : "No") << endl;

    cout << "Queue size : " << myQue.size() << endl;

    return 0;
}