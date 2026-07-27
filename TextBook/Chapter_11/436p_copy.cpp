#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Person{
    string name;
    int age;
    float height;
    float weight;
};

void print_person_all(vector<Person>& vec){
    for(vector<Person>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << "Name : " << it->name << "\t > Age : " << it->age << ", "
             << "Height : " << it->height << ", Weight : " << it->weight << endl;
    }
}

int main(){
    Person p[5]{
        {"B", 24, 180, 70},
        {"J", 22, 165, 55},
        {"J", 30, 170, 65},
        {"T", 12, 155, 46},
        {"M", 18, 172, 62}
    };

    vector<Person> from_vector;
    for(int i = 0; i < 5; i++){from_vector.push_back(p[i]);}

    cout << "-----from_vector-----\n";
    print_person_all(from_vector);
    cout << endl;

    vector<Person> to_vector;
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector));

    cout << "-----to_vector-----\n";
    print_person_all(to_vector);
    cout << endl;

    from_vector[0].name = "C";
    from_vector[0].age = 5;
    from_vector[0].height = 110;
    from_vector[0].weight = 20;

    cout << "-----from_vector-----\n";
    print_person_all(from_vector);
    cout << endl;
    
    cout << "-----to_vector-----\n";
    print_person_all(to_vector);
    cout << endl;

    return 0;
}
