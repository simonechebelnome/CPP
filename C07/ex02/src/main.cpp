#include "../includes/Array.hpp"
#include <stdlib.h> 
#include <iostream>

#define SIZE 500

int main(){
    Array<int> iArr(SIZE);
    int *copy = new int[SIZE];
    srand(time(NULL));

    //! Filling the Arrays with random values
    for(int i = 0; i < SIZE; i++){
        const int ranValue = rand();
        iArr[i] = ranValue;
        copy[i] = ranValue;
    }

    //* Now we test if they're actually the same
    for(int i = 0; i < SIZE; i++){
        if (iArr[i] != copy[i]){
            std::cerr << "Values are not the same!" << std::endl;
            return -1;
        }
    }

    std::cout << "Both Arrays are equal!" << std::endl;

    //! Now let's try to trigger the exception that we've created
    try {
        iArr[-1] = 0;
    } catch (std::exception const &err) {
        std::cerr << err.what() << std::endl;
    }

    try {
        iArr[SIZE] = 0;
    } catch (std::exception const &err) {
        std::cerr << err.what() << std::endl;
    }

    delete [] copy;
    return 0;
}