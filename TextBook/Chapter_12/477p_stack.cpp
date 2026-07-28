#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top of stack element : " << myStack.top() << endl;

    myStack.pop();
    cout << "After pop stack's top element, new top element : " << myStack.top() << endl;

    cout << "Stack size : " << myStack.size() << endl;

    if(myStack.empty()){cout << "stack is empty\n";}
    else {cout << "satck is not empty\n";}

    return 0;
}