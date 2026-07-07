#include<iostream>

using namespace std;

class character{
public:
    character(){
        cout << "character's constructor\n";
    };
};

class monster{
public:
    monster(){
        cout << "monster's class constructor\n";
    };
};

class monster_a : public monster, character{
public:
    monster_a(){
        cout << "monster_a's class constructor\n";
    };
};

int main(){
    monster_a forest_monster;

    return 0;
}