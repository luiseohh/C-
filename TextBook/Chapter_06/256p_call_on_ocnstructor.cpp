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
        monster_a(10,10);
    };

    monster_a(int x, int y) : location{x,y}{
        cout << "moster_a's class constructor(add parameter)\n";
    };

    void show_loctaion(){
        cout << "location(" << location[0] << " , " << location[1] << " ) \n";
    };

private:
    int location[2];
};

int main(){
    monster_a forest_monster;
    forest_monster.show_loctaion();

    return 0;
}