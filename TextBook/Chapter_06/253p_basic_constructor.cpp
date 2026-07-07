#include<iostream>

using namespace std;

class character{
public:
    character(){
        cout << "character's constructor\n";
    };
};

int main(){
    character player;
    
    return 0;
}