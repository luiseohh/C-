#include <iostream>

using namespace std;

class character {
public:
  character() : hp(100), power(100) {};
protected:
  int hp;
  int power;
};

class player : public character {
public:
  player() {};
};

class monster{
public:
    monster(){};
    virtual void attack_special(player target_player);
};

void monster::attack_special(player taerget_player){
    cout << "basic attack : damage -10hp\n";
}

class monster_a : public monster, character{
public:
    virtual void attack_special(player target_player);
};

void monster_a::attack_special(player target_player){
    cout << "special ttack : damage -15hp\n";
}

int main(){
    player player1;

    monster mother_monster;
    monster_a forest_monster;

    mother_monster.attack_special(player1); // 10

    monster* mon = &forest_monster;
    cout << endl << "after upcasting parent class, attack\n";
    mon->attack_special(player1); // 15

    mon = &mother_monster;
    cout << endl << "attack to child class\n";
    mon->attack_special(player1); // 10

    return 0;
}
