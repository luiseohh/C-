#include<iostream>
#include<string>

using namespace std;

class character{
public:
    character() : hp(100), power(100), location{0, 0}, level(1){
    };
    void move(int x, int y){};
    void move(int x[], int y[], int spot_count){};
    void get_damage(int _damage){};
    int get_hp(){return hp;};
    int get_level() {return level;};
protected:
    int hp;
    int power;
    int location[2];
    int level;
};

class player : public character{
public:
    player() {};
};

class monster{
public:
    void attack(player target_player){};
    virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player){
    cout << "basic attack : damage -10hp\n";
}

class monster_c : public monster, public character{
public:
    void attack_special(player target_player) override;
    monster_c operator+(monster_c& operand);
    monster_c operator+(player &operand);
    void set_level(int level_value) {level = level_value;};
    void set_hp(int hp_value) {hp = hp_value;};
};

monster_c monster_c::operator+(monster_c &operand){
    monster_c result_monster;
    result_monster.set_level(level + operand.get_level());
    return result_monster;
}

monster_c monster_c::operator+(player &operand){
    monster_c result_monster;
    result_monster.set_hp(hp + operand.get_hp());
    return result_monster;
}

void monster_c::attack_special(player target_player) {
  cout << "strong litning attack : damage - 100 hp\n";
}

int main(){
    monster_c monster_c_obj1, monster_c_obj2;
    monster_c_obj2.set_level(2);
    player player1;
    monster_c new_monster_c_obj = monster_c_obj1 + monster_c_obj2;

    cout << "before merge monster c HP[" << new_monster_c_obj.get_hp()
         << "]\n";

    new_monster_c_obj = new_monster_c_obj + player1;

    cout << "after merge monster c HP[" << new_monster_c_obj.get_hp()
         << "]\n";

    return 0;
}