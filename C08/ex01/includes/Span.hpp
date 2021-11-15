#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

class Span {
private:
    unsigned int _size;
    std::vector<int> _container;
public:
    Span(unsigned int N);
    Span(Span const &copy);
    Span &operator=(Span const &copy);
    ~Span();

    void addNumber(int num);
    int longestSpan();
    int shortestSpan();
};

#endif