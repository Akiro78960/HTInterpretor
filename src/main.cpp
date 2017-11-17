#include "utils.cpp"

int main ( int argc, char *argv[] ) {

    fstream file;
    vector<string> v;
    int tabCount;

    //checking arguments
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

    //push to v
    string line;
    while(getline(file, line)){
         v.push_back(line);
    }
    file.close();

    printVector(v);

    ofstream outputFile;
    outputFile.open ("output.html");
    vectorToFile(v, &outputFile);

    outputFile.close();

    return 0;
}
