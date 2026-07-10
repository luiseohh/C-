#include<iostream>

using namespace std;

class monster{
public:
    monster(){
        cout << "monster's class constructor\n";
    };
    virtual ~monster(){
        cout << "monster's class destructor\n";
    };
};

class monster_a : public monster{   
public:
    monster_a(){
        cout << "monster_a's class constructor\n";
    };
    virtual ~monster_a(){
        cout << "monster_a's class destructor\n";
    };
};

int main(){
    monster *forest_monster = new monster_a();
    delete forest_monster;
    
    return 0;
}