#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class character {
public:
  character() : hp(100), power(100) {
  };

  void get_damage(int _damage) {};
protected:
  int hp;
  int power;
};

class player : public character {
public:
  player() {};
};

class monster {
public:
  void attack(player target_player) {};
  virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
  cout << "basic attack : damage - 10 hp" << endl;
}

class monster_b : public monster, character{
public:
    monster_b(player &attack_target)
        : monster_type("nomal"),
        location{0, 0},
        unique_id(++total_count),
        target(attack_target){
        difficult_level = 10;
        quiz = new char[1024];
    };

    ~monster_b(){
        delete[] quiz;
        total_count--;
    };

    void set_quiz(const char *new_quiz) {
        strncpy(quiz, new_quiz, 1023);
        quiz[1023] = '\0';
    };
    void set_type(string type) {monster_type = type;};
    void set_difficult_level(int level) {difficult_level = level;};
    void set_location(int x, int y) {location[0] = x; location[1] = y;};
    char *get_quiz() {return quiz;};
    string get_type() {return monster_type;};
    int get_difficult_level() {return difficult_level;};
    int get_x_location() {return location[0];};
    int get_y_location() {return location[1];};
    
private:
    const int unique_id;
    player &target;
    static int total_count;
    char *quiz;
    string monster_type;
    int difficult_level;
    int location[2];
};

int monster_b::total_count = 0;

int main(){
    player first_player;
    monster_b first_mon(first_player);
    first_mon.set_quiz("What do you have four feet in the morning, two for lunch, and two for dinner?");
    first_mon.set_difficult_level(100);
    first_mon.set_type("riddle monster");
    first_mon.set_location(30,30);

    monster_b second_mon(first_player);
    second_mon.set_quiz("If the door is turned upside down, what will it be?");
    second_mon.set_location(45,50);

    cout << "[" << first_mon.get_x_location() << " , " << first_mon.get_y_location()
         << "]" << "first monster(" << first_mon.get_type() << " - "
         << first_mon.get_difficult_level()
         << ")'s riddle : " << first_mon.get_quiz() << endl;
    cout << "[" << second_mon.get_x_location() << " , " << second_mon.get_y_location()
         << "]" << "second monster(" << second_mon.get_type() << " - "
         << second_mon.get_difficult_level()
         << ")'s riddle : " << second_mon.get_quiz() << endl;

    return 0;
}