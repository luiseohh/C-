#include<iostream>
#include<string>

using namespace std;

int main(){
    string text = "The C++ programming language is one of the hardest languages.";

    string target = "hardest";
    string replacement = "monst powerful";

    size_t pos = text.find(target);

    if(pos != string::npos) {
        text.replace(pos, target.length(), replacement);
        cout << "After replace : " << text << endl;
    }else {cout << target << "'s cant find\n";}

    return 0;
}