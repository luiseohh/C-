#include<iostream>

using namespace std;

class character{
public:
    character() : hp(100), power(100){};
protected:
    int hp;
    int power;
};

class player : public character{
public:
    player(){};
};

class monster{
public:
    monster(){};
    void get_damage(int _damage){};
    void attack(player target_player){};
    virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player){
    cout << "basic attack : damage -10hp\n";
}

class monster_a : public monster, character{
public:
    virtual void attack_special(player target_player) override;
};

void monster_a::attack_special(player target_player){
    cout << "special attack : damage -15hp\n";
}

class monster_b : public monster, character {
public:
  virtual void attack_special(player target_player) override;
};

void monster_b::attack_special(player target_player) {
  cout << "virtual attack : damage - 0 hp\n";
}

class monster_c : public monster, character {
public:
  virtual void attack_special(player target_player) override;
};

void monster_c::attack_special(player target_player) {
  cout << "strong lightning attack : damage - 100 hp\n";
}

int main(){
    player player1;
    monster_a forest_monster;

    monster &mon = forest_monster;
    monster_a &mon_a = forest_monster;

    cout << endl;
    mon.attack_special(player1);

    cout << endl << "attck to child class\n";
    mon_a.attack_special(player1);
    
    cout << endl << "attack to range operator\n";
    mon_a.monster::attack_special(player1);

    return 0;
}