#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include <typeinfo>
#include <string>

template<typename T>
void swap(T value1, T value2){
    T temp = value2;
    value2 = value1;
    value1 = temp;
    { std::cout << "Function: Swap \nType: " << typeid(T).name() << "\nOld Values: "
    << value2 << ", " << value1 << "\nNew Values: " << value1 << ", " << value2 << "\n\n"; }
}

template<typename T>
T min(T value1, T value2){
    std::cout << "\nFunction: Min \nType: " << typeid(T).name() << "\nValues: " << value1 << ", " << value2 << "\nMin: ";
    return value1 == value2 ? value2 : (value1 < value2 ? value1 : value2); 
}

template<typename T>
T max(T value1, T value2){
    std::cout << "\nFunction: Max \nType: " << typeid(T).name() << "\nValues: " << value1 << ", " << value2 << "\nMax: ";
    return value1 == value2 ? value2 : (value1 > value2 ? value1 : value2); 
}
#endif