#include <iostream>
#include <tuple>

using namespace std;

const int monster_a_type = 0;
const int monster_b_type = 1;
const int monster_c_type = 2;

class monster {
public:
  int get_monster_type() { return monster_type; };

protected:
  int monster_type;

private:
  int location_x;
  int location_y;
};

class monster_a : public monster {
public:
  monster_a() {
    monster_type = monster_a_type;
  };
};


class monster_b : public monster {
public:
  monster_b() {
    monster_type = monster_b_type;
  };
};


class monster_c : public monster {
public:
  monster_c() {
    monster_type = monster_c_type;
  };
};

tuple<int, string, int, int> get_monster_status(monster& monster_inst){
    int monster_type = monster_inst.get_monster_type();
    string monster_name;
    int hp(100), power(100);

    switch (monster_type) {
    case monster_a_type:
        monster_name = "A Monster";
        hp += 10;
        break;
    case monster_b_type:
        monster_name = "B Monster";
        power += 20;
        break;
    case monster_c_type:
        monster_name = "C Monster";
        hp -= 10;
        power += 100;
        break;
    }

    return make_tuple(monster_type, monster_name, hp, power);
}

void print_out_tuple(tuple<int, string, int, int> monster_status){
    cout << get<1>(monster_status) << "("
         << get<0>(monster_status) << ") : hp("
         << get<2>(monster_status) << "), power("
         << get<3>(monster_status) << ")\n";
}

template<class tuple_obj, std::size_t N>
// class tuple_obj -> 어떤 타입이든 받겠다는 키워드, typename tuple_obj랑 같은 의미
// std::size_t N -> 몇 번째 요소까지 출력할 것인가를 나타내는 정수 템플릿 매개변수
struct print_out_tuple_second {
  static void show(const tuple_obj& t)
  {
    print_out_tuple_second<tuple_obj, N - 1>::show(t);
    std::cout << ", " << std::get<N - 1>(t);
  }
};

template<class tuple_obj>
struct print_out_tuple_second<tuple_obj, 1> {
  static void show(const tuple_obj& t)
  {
    std::cout << std::get<0>(t);
  }
};

int main(){
    monster_a monster_a_inst;
    monster_b monster_b_inst;

    tuple<int, string, int, int> monster_a_status = get_monster_status(monster_a_inst);

    tuple<int, string, int, int> monster_a_status_copy(monster_a_status);

    tuple<int, string, int, int> monster_b_status_temp{monster_b_type, "B Monster Temp", 100, 100};

    auto monster_b_status = get_monster_status(monster_b_inst);

    print_out_tuple(monster_a_status);
    print_out_tuple(monster_a_status_copy);
    print_out_tuple(monster_b_status_temp);

    swap(monster_b_status, monster_b_status_temp);
    cout << "After swap tuple's value\n";
    print_out_tuple(monster_b_status_temp);

    //tuple_cat -> 튜플 합치기, moster_a 가 tuple<int, string>이고 monster_b 가 tuple<int, int>라면
    //monster_status_all 은 tuple<int, string, int,int>로 변환해 준다.
    auto monster_status_all = tuple_cat(monster_a_status, monster_b_status);
    cout << "After call tuple_cat : {";
    print_out_tuple_second<
        decltype(monster_status_all), // decltype -> type이 뭔지 알아내줘 라는 뜻, monster_status_all 대신 쓴거임
        tuple_size<decltype(monster_status_all)>::value // 튜플 안에 요소가 총 몇개가 들어있는지 컴파일 시점에서 알려준다.
        >::show(monster_status_all);
        cout << "}\n";

    return 0;
}