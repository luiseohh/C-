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

    monster_a(int x, int y) : location{x,y} {
        cout << "monster_a's class constructor ( parameter addtion)\n";
    };

    void show_location(){
        cout << "location(" << location[0] << ", " << location[1] << ")\n";
    };

private:
    int location[2];
};

int main(){
    monster_a forest_monster; // basic constructor
    forest_monster.show_location(); 
    monster_a wood_monster(10,25); // calling have parameter constructor
    wood_monster.show_location();

    return 0;
}