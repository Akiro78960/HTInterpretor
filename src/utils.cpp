#include "utils.h"

void printVector( std::vector<std::string> v){
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
}

void vectorToFile(std::vector<std::string> v, std::ofstream *f){
    if(f->is_open()){
        for (size_t i = 0; i < v.size(); i++) {
            *f << v[i] << std::endl;
        }
    }
    else{
        cout << "file not open" << endl;
    }
}
