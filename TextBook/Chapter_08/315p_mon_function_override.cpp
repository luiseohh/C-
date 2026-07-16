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
    void get_damage(int _damge){};
    void attack(player target_player){};
    void attack_special(player target_player);
};

void monster::attack_special(player taerget_player){
    cout << "basic attack : damage -10hp\n";
}

class monster_a : public monster, character{
public:
    void attack_special(player target_player);
};

void monster_a::attack_special(player target_player){
    cout << "special ttack : damage -15hp\n";
}

class monster_b : public monster, character{
public:
    void attack_special(player target_player);
};

void monster_b::attack_special(player target_player){
    cout << "virtaul attack : damage -0hp\n";
}

class monster_c : public monster, character{
public:
    void attack_special(player target_player);
};

void monster_c::attack_special(player target_player){
    cout << "strong thunderbolt attack : damage -100hp\n";
}

int main(){
    player player1;

    monster_a forest_monster;

    monster &mon = forest_monster;
    monster_a &mon_a = forest_monster;

    cout << endl << "after upcasting parent class, attack\n";
    mon.attack_special(player1);

    cout << endl << "attack to child class\n";
    mon_a.attack_special(player1);

    return 0;
}
