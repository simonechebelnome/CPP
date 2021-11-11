#include <iostream>
#include "../includes/Convert.hpp"

int main(int argc, char *argv[]) {
    if(argc != 2){
        std::cerr << "Wrong number of arguments" << std::endl;
        return -1;
    }

    Convert value(argv[1]);
    value.makeConversion();
}