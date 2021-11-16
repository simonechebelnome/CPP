#include "../includes/span.hpp"
#include <stdlib.h>

int main(){
    try {
        Span sp(5);
        sp.addNumber(23);
        sp.addNumber(18);
        sp.addNumber(54);
        sp.addNumber(21);
        sp.addNumber(2);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception &err) {
        std::cerr << err.what() << std::endl;
    }

    std::cout << "===========" << std::endl;

    try {
        Span extreme(10000);
        int random;
        srand(time(NULL));
        for(int i = 0; i < 10000; i++){
            random = rand() % RAND_MAX + 1;
            extreme.addNumber(random);
        }

        std::cout << "Shortest span: " << extreme.shortestSpan() << std::endl;
        std::cout << "Longest span: " << extreme.longestSpan() << std::endl;
    } catch (std::exception &err) {
        std::cerr << err.what() << std::endl;
    }
}