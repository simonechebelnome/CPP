#include "../includes/easyfind.hpp"
#include <iostream>
#include <iterator>
#include <vector>

int main(){
    //! Test by using vectors as containers
    std::vector<int> myVec;
    myVec.push_back(1);
    myVec.push_back(2);
    myVec.push_back(3);
    myVec.push_back(4);
    myVec.push_back(5);

    //* Printing Vec elements
    for(size_t i = 0; i < myVec.size(); i++){
        std::cout << "Vec element " << i << ": " << myVec.at(i) << std::endl;
    }

    //* Trying the find function
    std::cout << "\nFind element 1" << std::endl;
    try {
        std::cout << "Found element at position > " << std::distance(myVec.begin(), easyfind(myVec, 1)) << std::endl;
    } catch (std::exception &err) {
        std::cerr << err.what() << std::endl;
    }

    std::cout << "\nFind element 3" << std::endl;
    try {
        std::cout << "Found element at position > " << std::distance(myVec.begin(), easyfind(myVec, 3)) << std::endl;
    } catch (std::exception &err) {
        std::cerr << err.what() << std::endl;
    }

    std::cout << "\nFind element 6 (doesn't exist)" << std::endl;
    try {
        std::cout << "Found element at position > " << std::distance(myVec.begin(), easyfind(myVec, 6)) << std::endl;
    } catch (std::exception &err) {
        std::cerr << err.what() << std::endl;
    }
}