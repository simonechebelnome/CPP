#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void printElement(T& element){
    std::cout << element << std::endl;
}

template<typename T>
void iter(T *arr, size_t length, void(*printFunction)(T& element)){
    for(size_t i = 0; i < length; i++) {
        printFunction(arr[i]);
    }
}


class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


#endif