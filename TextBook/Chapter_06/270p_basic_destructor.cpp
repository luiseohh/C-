#include<iostream>

using namespace std;

class character{
public:
    character(){
        cout << "character's class constructor\n";
    };
    ~character(){
        cout << "character's class destructor\n";
    };
};

class monster{
public:
    monster(){
        cout << "monster's class constructor\n";
    };
    ~monster(){
        cout << "monster's class destructor\n";
    };
};

class monster_a : public monster, character{
public:
    monster_a(){
        cout << "monster_a's class constructor\n";
    };
    ~monster_a(){
        cout << "monster_a's class destructor\n";
    };
};

int main(){
    monster_a forest_monster;
    
    return 0;
}