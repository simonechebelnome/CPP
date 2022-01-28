#include "../includes/Templates.hpp"

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    //More Test

    std::cout << std::endl << "Complex types tests" << std::endl;

    Awesome e(2), f(4); swap(e,f);
    std::cout << "Awesome 1: " << e << "\tAwesome 2: " << f << std::endl;
    std::cout << "Max: " << max(e, f) << std::endl;
    std::cout << "Min: " << min(e, f) << std::endl;
    return (0);
}
