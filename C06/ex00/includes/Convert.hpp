#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <climits>
#include <cmath>

class Convert {
private:
    const std::string _value;

    int toInt();
    char toChar();
    float toFloat();
    double toDouble();

public:
    Convert();
    Convert( std::string const &strValue );
    Convert( Convert const &copy );
    Convert &operator=( Convert const &copy );
    ~Convert();

    void makeConversion();
};

#endif