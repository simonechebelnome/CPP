#include "../includes/iter.hpp"

int main(){
    
    std::string test[] = {"ciao", "prova", "test"};
    iter<std::string>(test, 3, printElement);

    int numArray[] = {1, 324, 234, 1123};
    iter<int>(numArray, 4, printElement);

    //More tests

    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    iter<int>( tab, 5, printElement );
    iter( tab2, 5, printElement);

    return 0;
}