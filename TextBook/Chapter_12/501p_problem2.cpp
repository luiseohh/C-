#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<double> myStack;
    myStack.push(3.14);
    myStack.push(2.71);
    myStack.push(4.98);
    myStack.push(1.23);

    double min = myStack.top();
    myStack.pop();
    while(!myStack.empty()){
        if(min > myStack.top()){min = myStack.top();}
        myStack.pop();
    }

    cout << min << endl;

    return 0;
}