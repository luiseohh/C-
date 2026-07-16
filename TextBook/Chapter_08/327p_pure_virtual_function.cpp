#include<iostream>
#include<list>

using namespace std;

class character{
public:
    character() : hp(100), power(100){};
    void get_damage(int _damage){};
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
    virtual void attack_special(player target_player);
    virtual void attack_at_dawn() = 0;
};

void monster::attack_special(player target_player){
    cout << "basic attack : damage -10hp\n";
}

class monster_a : public monster, character{
public:
    virtual void attack_special(player target_player) override;
    virtual void attack_at_dawn() override;
};

void monster_a::attack_at_dawn(){
    cout << "East suprise attack !\n";
}

void monster_a::attack_special(player target_player){
    cout << "special attack : damage -15hp\n";
}

class monster_b : public monster, character{
public:
    virtual void attack_special(player target_player) override;
    virtual void attack_at_dawn() override;
};

void monster_b::attack_special(player target_player){
    cout << "virtual attack : damage -0hp\n";
}

void monster_b::attack_at_dawn(){
    cout << "Infiltrate enemy lines and set fires\n";
}

class monster_c : public monster, character{
public:
    virtual void attack_special(player target_player) override;
    virtual void attack_at_dawn() override;
};

void monster_c::attack_special(player target_player){
    cout << "strong thunderbolt attack : damage - 100hp\n";
}

void monster_c::attack_at_dawn(){
    cout << "An artillery strike on the southern enemy lines\n";
}

int main(){
    list<monster*> mon_list;

    monster_a fir_mon;
    mon_list.push_back(&fir_mon);

    monster_b sec_mon;
    mon_list.push_back(&sec_mon);

    monster_c thr_mon;
    mon_list.push_back(&thr_mon);

    for(auto iteam : mon_list){
        iteam->attack_at_dawn();
    }

    return 0;
}