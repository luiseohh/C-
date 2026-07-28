#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> scores;

    scores.insert(make_pair("B", 85));
    scores.insert(make_pair("J", 90));
    scores.insert(make_pair("T", 70));

    cout << "map size : " << scores.size() << endl;

    auto it = scores.find("B");
    if(it != scores.end()){cout << "Search result of B's score : " << it->second << endl;}
    else{cout << "B's score is not saved\n";}
    cout << endl;

    scores.erase("B");

    cout << "After erase B's information, map size : " << scores.size() << endl << endl;

    cout << "--Call map elements(all)--\n";

    for(const auto& pair : scores){cout << pair.first << ": " << pair.second << endl;}

    return 0;
}