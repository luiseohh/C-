#include<iostream>

using namespace std;

class monster{
public:
    monster();
    ~monster();
private:
    int *dummy;
};

monster::monster(){
    cout << "monster() call constructor\n";
    dummy = new int;
}

monster::~monster(){
    cout << "~monster() call destructor\n";
    delete dummy;
}

class monster_a : public monster{
public:
    monster_a();
    ~monster_a();
private:
    int *dummy_a;
};

monster_a::monster_a(){
    cout << "monster call constructor\n";
    dummy_a = new int;
}

monster_a::~monster_a(){
    cout << "~monster class destructor\n";
    delete dummy_a;
}

int main(){
    monster_a *mon = new monster_a();

    delete mon;

    return 0;
}

