#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    multimap<string, int> scores;

    scores.insert(make_pair("B", 85));
    scores.insert(make_pair("J", 90));
    scores.insert(make_pair("T", 70));
    scores.insert(make_pair("B", 100));

    cout << "map size : " << scores.size() << endl;

    int count = scores.count("B");
    cout << "Number of B scores saved : " << count << endl;

    auto range = scores.equal_range("B");
    if(range.first != scores.end()){
        cout <<"B's scores : ";
        for(auto it = range.first; it != range.second; it++){cout << it->second << " ";}
        cout << endl;
    } else{ cout << "B's score not saved\n";}
    cout << endl;

    scores.erase("B");

    cout << "After erase B's information, map size : " << scores.size() << endl << endl;

    cout << "--Call map elements(all)--\n";

    for(const auto& pair : scores){cout << pair.first << ": " << pair.second << endl;}

    return 0;
}