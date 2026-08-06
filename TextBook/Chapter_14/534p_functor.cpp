#include<iostream>

using namespace std;

struct bomb{
    void operator()(){
        cout << "Boom\n";
    }

    void operator()(int range){
        cout << "Distance " << range << "m attakc player!\n";
    }
};

int main(){
    bomb mine;

    mine();
    mine(30);

    return 0;
}