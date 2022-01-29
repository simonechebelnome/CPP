#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T> typename T::iterator easyFind(T& container, int find){
    //* Std::find actually returns an iterator (like most of these functions do)
    typename T::iterator result = std::find(container.begin(), container.end(), find);
    if (result == container.end())
        throw std::exception();
    
    return result;
}

#endif