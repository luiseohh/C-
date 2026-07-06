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
public :
    player(){};
};


class monster{
public:
    monster(){}; // 이거는 생성자 아닌가 ?
    void get_damage(int _damage){};
    void attack(player target_player){};
    void attack_special(player target_player); // 여기는 왜 중괄호가 없지 ? -> 그냥 선언만 해서
};

void monster::attack_special(player target_player){
    cout << "base attck : damage -10 hp\n";
}

class monster_a : public monster, character{
public:
    void attack_special(player target_player);
};

void monster_a::attack_special(player target_player){
    cout << "intangle attack : damage -15 hp\n";
}

class monster_b : public monster, character{
public:
    void attack_special(player target_player); // 여기는 왜 override를 안쓰는가 ? -> override가 아님, 재정의를 하려면 부모 클래스의 함수 앞에 반드시 virtual(가상함수)가 붙어있어야 함
};

void monster_b::attack_special(player target_player){
    cout << "virtual attack : damage -0 hp\n";
}

class monster_c : public monster, character{ // 왜 상속 : 뒤에 접근제한자를 사용하는가 ? -> 상속 받은 멤버들의 접근 권한을 자식 클래스에서 어떻게 유지할까 결정
public:
    void attack_special(player target_player);
};

void monster_c::attack_special(player target_player){
    cout << "strong litning attack : damage -100hp\b";
}

int main(){
    player player_1;

    monster_a forest_monster;
    monster_b tutorial_monster;
    monster_c boss_monster;

    cout << "whole monster attack\n";
    forest_monster.attack_special(player_1);
    tutorial_monster.attack_special(player_1);
    boss_monster.attack_special(player_1);

    return 0;
}