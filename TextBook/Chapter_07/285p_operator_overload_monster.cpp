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
    void set_level(int level_value) {level = level_value;};
    void set_hp(int hp_value) {hp = hp_value;};
};

monster_c monster_c::operator+(monster_c& operand){
    monster_c result_monster;
    result_monster.set_level(level + operand.get_level());
    return result_monster;
}

void monster_c::attack_special(player target_player){
    cout << "strong litning attack : damage -100hp\n";
}

int main(){
    monster_c monster_c_obj1, monster_c_obj2;
    monster_c_obj2.set_level(2);
    monster_c new_monster_c_obj = monster_c_obj1 + monster_c_obj2;

    cout << "before merge monster c #1 level[" << monster_c_obj1.get_level()
         << "], monster c #2 level[" << monster_c_obj2.get_level()
         << "]\n";

    cout << "after merge monster c level[" << new_monster_c_obj.get_level()
         << "]\n";

    return 0;
}