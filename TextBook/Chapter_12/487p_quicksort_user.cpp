#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

struct Person{
    string name;
    int age;
    float height;
    float weight;
};

void print_person_all(const vector<Person>& vec){
    for(const auto& elem : vec){
        cout << "Name : " << elem.name << "\t"
        << "Age : " << elem.age << "\t"
        << "Height : " << elem.height << "\t"
        << "Weight : " << elem.weight << endl;
    }
}

bool compare(const Person& lhs, const Person& rhs){
    return lhs.age < rhs.age;
}

int main(){
    Person p[5] = {
      {"Brain", 24, 180, 70},
      {"Jessica", 22, 165, 55},
      {"James", 30, 170, 65},
      {"Tom", 12, 155, 46},
      {"Mary", 18, 172, 62}
    };

    vector<Person> vec;
    for(auto& elem : p) {vec.push_back(elem);}


    cout << "-----Before sort-----\n";
    print_person_all(vec);
    cout << endl;

    sort(vec.begin(), vec.end(), compare);
    cout << "-----After sort-----\n";
    print_person_all(vec);

    return 0;
}
