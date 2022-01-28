#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include <typeinfo>
#include <string>

template<typename T>
void swap(T& value1, T& value2){

    T temp = value2;
    value2 = value1;
    value1 = temp;

//    std::cout << "Function: Swap \nType: " << typeid(T).name() << "\nOld Values: "
//    << value2 << ", " << value1 << "\nNew Values: " << value1 << ", " << value2 << "\n\n";
}

template<typename T>
T min(T value1, T value2){
//    std::cout << "\nFunction: Min \nType: " << typeid(T).name() << "\nValues: " << value1 << ", " << value2 << "\nMin: ";
    return value1 == value2 ? value2 : (value1 < value2 ? value1 : value2); 
}

template<typename T>
T max(T value1, T value2){
//    std::cout << "\nFunction: Max \nType: " << typeid(T).name() << "\nValues: " << value1 << ", " << value2 << "\nMax: ";
    return value1 == value2 ? value2 : (value1 > value2 ? value1 : value2); 
}
class Awesome {
public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; } bool
    operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
private:
    int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif