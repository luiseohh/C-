#include<iostream>

using namespace std;

class character{
public:
    character() : hp(100), power(100) {};
    int get_hp(){return hp;};
    int get_power(){return power;};
protected:
    int hp;
    int power;
};

class player{
public:
    player(){};
private:
    character mian_body;
};

class monster{
public:
    monster(){};
    void get_damage(int _damage){};
    virtual void attack(player target_player){
        cout << "Attack : damage -10hp\n";
    };
};

class monster_2nd_gen : public monster{
public:
    virtual void attack(player target_player) override{
        cout << "New Attack : damage -30hp\n";
    };
};

class monster_a{
public:
    void attack(player target_player){
        main_role.attack(target_player);
    };
private:   
    character mian_body;
    monster main_role;
};

class monster_b{
public:
    monster_b(character& ref_character, monster& ref_monster)
        : main_body(ref_character), main_role(ref_monster){};
    void attack(player target_player){
        main_role.attack(target_player);
    };
private:
    character &main_body;
    monster &main_role;
};

int main(){
    character character_obj;
    monster monster_obj;
    monster_2nd_gen monster_new_obj;

    player player_1;

    monster_a forest_monster;
    
    monster_b tutoral_monster(character_obj, monster_obj);
    monster_b urban_monster(character_obj, monster_new_obj);

    cout << "Monster A Attack\n";
    tutoral_monster.attack(player_1);

    cout << endl << "Monster B Attack:\n";
    forest_monster.attack(player_1);
    urban_monster.attack(player_1);


    return 0;
}