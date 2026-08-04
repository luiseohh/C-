#include<iostream>
#include<typeinfo>

using namespace std;

enum class monster_enum : char{
    monster_a_type, monster_b_type = 'b', monster_c_type = 'c'
};

enum struct terrain_enum : int{
    forest_terrain_type, cyber_terrian_type, urban_terrain_type
};

enum weapon_enum {
    gun_type, machine_gun_type, arrow_type = 10
};

class monster{
public:
    monster(monster_enum monster_type, terrain_enum terrain_type, weapon_enum weapon_type)
    : monster_type_definition(monster_type),
      main_field(terrain_type),
      main_weapon(weapon_type){};
private:
    monster_enum monster_type_definition;
    terrain_enum main_field;
    weapon_enum main_weapon;

    friend void print_monster_loaction(monster& mon){
        switch(mon.main_field){
        case terrain_enum::forest_terrain_type:
            cout << "Forest space";
            break;
        case terrain_enum::cyber_terrian_type:
            cout << "Cyber space";
            break;
        case terrain_enum::urban_terrain_type:
            cout << "Urban space";
            break;
        }
    }

    friend void print_monster_weapon(monster& mon){
        switch(mon.main_weapon){
        case weapon_enum::gun_type:
            cout << "Pistol";
            break;
        case weapon_enum::machine_gun_type:
            cout << "Machin gun";
            break;
        case weapon_enum::arrow_type:
            cout << "Arrow";
            break;
        }
    }
};

int main(){
    monster monster_in_forest = monster(
        monster_enum::monster_a_type,
        terrain_enum::forest_terrain_type,
        gun_type
    );

    monster monster_with_arrow = monster(
        monster_enum::monster_b_type,
        terrain_enum::cyber_terrian_type,
        arrow_type
    );

    cout << "First Monster ";
    print_monster_loaction(monster_in_forest);
    cout << "is activity terrain\n";
    print_monster_weapon(monster_in_forest);
    cout << " it deals primarily with weapons\n";

    cout << "Second Monster ";
    print_monster_loaction(monster_with_arrow);
    cout << "is activity terrain\n";
    print_monster_weapon(monster_with_arrow);
    cout << " it deals primarily with weapons\n";

    return 0;
}