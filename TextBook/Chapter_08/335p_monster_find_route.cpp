#include<iostream>
#include<list>

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
    monster();
    virtual ~monster();
    virtual void find_route() = 0;
    virtual void attack_special(player target_player) = 0;
};

monster::monster(){
    cout << "Monster's parents class constructor\n";
}

monster::~monster(){
    cout << "Monster's parents class destructor\n";
}

class monster_a : public monster{
public:
    virtual void find_route() override;
    virtual void attack_special(player target_player) override;
};

void monster_a::find_route(){
    cout << "DFS\n";
}

void monster_a::attack_special(player target_plyaer){
    cout << "Special attack : damage -15hp\n";
}

class monster_b : public monster{
public:
    virtual void find_route() override;
    virtual void attack_special(player target_player) override;
};

void monster_b::find_route(){
    cout << "BFS\n";
}

void monster_b::attack_special(player target_player){
    cout << "virtual attack : damage -0hp\n";
}

class monster_c : public monster{
public:
    virtual void find_route() override;
    virtual void attack_special(player target_player) override;
};

void monster_c::find_route(){
    cout << "dijkstra\n";
}

void monster_c::attack_special(player target_player){
    cout << "strong thunderbolt : damage -100hp\n";
}

void monster_routine(monster *mon, player target_player){
    mon->find_route();
    mon->attack_special(target_player);
}

int main(){
    list<monster*> mon_list;
    monster_a fir_mon;
    monster_b sec_mon;
    monster_c thr_mon;
    player target_plyaer;

    mon_list.push_back(&fir_mon);
    mon_list.push_back(&sec_mon);
    mon_list.push_back(&thr_mon);

    for(auto mon : mon_list){
        monster_routine(mon, target_plyaer);
    }

    return 0;
}