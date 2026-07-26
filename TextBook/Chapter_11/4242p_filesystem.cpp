#include<iostream>
#include<string>
#include<filesystem>
#include<fstream>

using namespace std;

namespace fs = filesystem;

int main(){
    fs::create_directories("MyDir");

    ofstream outFile("MyDir/myFile.txt");
    outFile << "Hello, FileSystem Libray!\n";
    outFile.close();

    cout << "File int MyDir:\n";
    for(const fs::directory_entry& entry : fs::directory_iterator("MyDir")){
        if(entry.is_regular_file()){
            cout << entry.path().filename() << endl;
        }
    }

    ifstream inFile("MyDir/myFile.txt");
    string line;
    while(getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();

    fs::remove_all("MyDir");

    return 0;
}