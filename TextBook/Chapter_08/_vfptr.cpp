#include <iostream>
using namespace std;

class Monster {
public:
    // Virtual function
    virtual void attack() { 
        cout << "Monster basic attack!\n"; 
    }
};

class MonsterA : public Monster {
public:
    // Overriding the virtual function
    void attack() override { 
        cout << "MonsterA special attack!\n"; 
    }
};

int main() {
    MonsterA monster_obj;

    // 1. Check the actual memory address of the object
    cout << "Actual object address             : " << &monster_obj << endl;

    // 2. Retrieve the first address space of the object (which holds _vfptr)
    // We cast the object's address to a void*** (pointer to a pointer table) and dereference it.
    void** vfptr = *(reinterpret_cast<void***>(&monster_obj));

    cout << "Address of _vfptr in the object   : " << vfptr << endl;

    // 3. Access the first function address stored in the virtual function table (vtable)
    // vfptr[0] points to the actual memory address of 'MonsterA::attack'.
    cout << "Address of the first vtable function: " << vfptr[0] << endl;

    // Define a function pointer type to manually invoke the function
    typedef void(*FuncPtr)();
    FuncPtr attackFunc = (FuncPtr)vfptr[0];
    
    cout << "=> Invoking the function manually via vtable address: ";
    attackFunc(); // Outputs: "MonsterA special attack!"

    return 0;
}