#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class my_class{
public:
    int value;
    string name;

    bool operator==(const my_class& other) const {
        return value == other.value && name == other.name;
    }
};

int main(){
  vector<my_class> obj = { {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} };
  
  auto it = find(obj.begin(), obj.end(), my_class{3, "three"});
  if(it != obj.end()) {cout << "FInd index : " << distance(obj.begin(), it) << endl;}
  else{cout << "Cant find\n";}

  return 0;
}