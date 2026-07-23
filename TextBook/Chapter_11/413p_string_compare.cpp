#include<iostream>
#include<string>

using namespace std;

void compare_result(int result){
    if(result == 0) {cout << result << " = Two string is smae\n";}
    else if(result > 0) {cout << result << " = Destination string is longer or the first character that does not match is larger\n";}
    else if(result < 0) {cout << result << " = Destination string is shorter or the first matching character is smaller\n";}
}

int main(){
    string s1 = "Hello";
    string s2 = "Hello";
    int result = s1.compare(s2);
    compare_result(result);

    s1 = "Hello";
    s2 = "Hello World";
    result = s1.compare(s2);
    compare_result(result);

    s1 = "cat";
    s2 = "dog";
    result = s1.compare(s2);
    compare_result(result);

    s1 = "Hello World";
    s2 = "Hello";
    result = s1.compare(s2);
    compare_result(result);

    s1 = "cat";
    s2 = "apple";
    result = s1.compare(s2);
    compare_result(result);

    return 0;
}