#include<iostream>

using namespace std;

int main(){
    int lotto[45];

    for(int i = 0; i < 45; i++){
        lotto[i] = i + 1;
    }

    cout << "Today's Lotto : "
         << lotto[0] << ", " << lotto[7] << ", " << lotto[15] << ", "
         << lotto[27] << ", " << lotto[36] << ", " << lotto[44] << endl;

    return 0;
}