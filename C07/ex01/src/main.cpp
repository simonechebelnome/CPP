#include "../includes/iter.hpp"

int main(){
    
    std::string test[] = {"ciao", "prova", "test"};
    iter<std::string>(test, 3, printElement);

    int numArray[] = {1, 324, 234, 1123};
    iter<int>(numArray, 4, printElement);
    
    return 0;
}