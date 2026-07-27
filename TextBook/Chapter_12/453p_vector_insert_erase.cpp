#include<iostream>
#include<vector>

using namespace std;

template<typename T>
void print_vector_all(vector<T>& vec){
    cout << "Number of elements in the vector inside : " << vec.size() << endl;

    for(typename vector<T>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl << "---------------------\n";
}

int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << "origin\n";
    print_vector_all(vec);

    vec.insert(vec.begin() + 3, 25);
    cout << "insert result\n";
    print_vector_all(vec);

    vec.erase(vec.begin() + 3);
    cout << "erase result\n";
    print_vector_all(vec);

    return 0;
}



