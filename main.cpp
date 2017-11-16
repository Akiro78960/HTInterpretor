#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main ( int argc, char *argv[] ) {

    fstream file;
    std::vector<std::string> v;
    int tabCount = 0;

    if(argc == 1){
        cout << "no arguments, using input.doc"  << endl;
        file.open("input.cdoc", ios_base::in);
    }else if(argc == 2){
        cout << "input file: " << argv[1] << endl;
        file.open(argv[1], ios_base::in);
    }
    if (!file.is_open()){
      cout << "File does not exist yet !\n";
      return 1;
    }

    string line;
    while(getline(file, line)){
         v.push_back(line);
    }
    file.close();

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    ofstream myfile;
    myfile.open ("output.html");

    for (size_t i = 0; i < v.size(); i++) {
        myfile << v[i] << endl;
    }
    myfile.close();

    return 0;
}
