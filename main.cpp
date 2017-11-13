// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main ( int argc, char *argv[] ) {

    if(argc == 1){
        cout << argc << " argument only";
        fstream file;
        file.open("input.cdoc", ios_base::in);

        if (!file.is_open()){
            cout << "create a input.cdoc file in the current directory!\n";
            return 1;
        }

        file.close();

    }else if(argc == 2){
        cout << argc << "    " << argv[1];
        fstream file;
        file.open(argv[1], ios_base::in);

        if (!file.is_open()){
            cout << "File does not exist yet !\n";
            return 1;
        }

        file.close();
    }

    ofstream myfile;
    myfile.open ("output.html");
    myfile << "<p> Writing this to a file. </p> \n";
    myfile.close();

    return 0;
}
