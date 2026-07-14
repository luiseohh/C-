#include<iostream>
#include<array>

using namespace std;

class manage_data_structure{
public:
    manage_data_structure();
    int cur_idx;
    array<int, 10> data_queue;
};

manage_data_structure::manage_data_structure() :
    cur_idx(0), data_queue{0,1,2,3,4,5,6,7,8,9}{
}

int main(void){
    int data;
    manage_data_structure data_structure;

    data_structure.cur_idx = -1;
    data = data_structure.data_queue[data_structure.cur_idx];

    cout << "Data [" << data_structure.cur_idx << "] : " << data << endl;

    return 0;
}