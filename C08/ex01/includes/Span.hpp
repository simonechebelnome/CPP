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
    void addSpan(std::vector<int>::iterator start, std::vector<int>::iterator end);
    const std::vector<int> getContainer() const { return _container; };
    int longestSpan();
    int shortestSpan();
};

#endif