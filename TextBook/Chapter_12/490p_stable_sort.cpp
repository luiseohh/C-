#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool compare_pairs(const pair<int, string>& a, const pair<int, string>& b){
    return a.first < b.first;
}

int main(){
    vector<pair<int, string>> pairs = {
        {5, "apple"},
        {2, "orange"},
        {5, "banana"},
        {3, "grape"}
    };

    stable_sort(pairs.begin(),pairs.end(), compare_pairs);

    for(const auto& elem : pairs){cout << elem.first << " : " << elem.second << endl;}

    return 0;
}