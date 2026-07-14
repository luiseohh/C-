#include<iostream>
#include<array>

using namespace std;

class manage_data_str{
public:
    manage_data_str();
    int get_cur_idx() {return cur_idx;};
    void set_cur_idx(int new_idx);
    int get_ary_val() {return data_queue[cur_idx];};

private:
    int cur_idx;
    array<int, 10> data_queue;
};

manage_data_str::manage_data_str() :
    cur_idx(0), data_queue{0,1,2,3,4,5,6,7,8,9}{}

void manage_data_str::set_cur_idx(int new_idx){
    if(new_idx < 0 || new_idx >= 10) return;
    cur_idx = new_idx;
}

int main(void){
    int data, idx;
    manage_data_str data_str;

    data_str.set_cur_idx(-1);
    idx = data_str.get_cur_idx();
    data = data_str.get_ary_val();
    cout << "Data [" << idx << "] : " << data << endl;

    return 0;
}