#include "../includes/Convert.hpp"

//* -- BASIC CLASS FUNCTIONS --

Convert::Convert( void ) : _value(NULL) {
}

Convert::Convert( std::string const &strValue ) :  _value(strValue) {
}

Convert::~Convert() {
}

Convert::Convert( Convert const &copy ) : _value(copy._value) {
    std::cout << "copy constructor called" << std::endl;
}

Convert &Convert::operator=( Convert const &copy ) {
    *this = copy;
    return (*this);
}


//* -- MEMBER FUNCTIONS --
//! You first need to convert to float

void Convert::makeConversion(){
    const char charValue = toChar();
    const double doubleValue = toDouble();
    const int intValue = toInt();
    const float floatValue = toFloat();

    if (floatValue < CHAR_MIN || floatValue > CHAR_MAX || std::isnan(floatValue)) {
		std::cout << "char: impossible" << std::endl;
	} else if (isprint(charValue)) {
		std::cout << "char: '" << charValue << "'" << std::endl;
	} else {
		std::cout << "char: non displayable" << std::endl;
	}

	if (intValue < INT_MIN || intValue > INT_MAX || std::isnan(floatValue)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << intValue << std::endl;
	}

    //* Semplicemente controlliamo se vi siano o meno valori dopo la virgola
	if (floatValue - intValue == 0) {
		std::cout << "float: " << floatValue << ".0f" << std::endl;
		std::cout << "double: " << doubleValue << ".0" << std::endl;
	} else {
		std::cout << "float: " << floatValue << "f" << std::endl;
		std::cout << "double: " << doubleValue << std::endl;
	}
}

char Convert::toChar(){
    return static_cast<char>(toFloat()); 
}

int Convert::toInt(){
    return static_cast<int>(toFloat());
}

double Convert::toDouble(){
    return static_cast<double>(toFloat());
}

float Convert::toFloat(){
    return atof(_value.c_str());
}






