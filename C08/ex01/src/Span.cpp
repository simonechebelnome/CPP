#include "../includes/Span.hpp"

Span::Span(unsigned int N) : _size(N){
}

Span::~Span(){
}

void Span::addNumber(int number){
    if(_container.size() > _size)
        throw std::exception();
    _container.push_back(number);
}

//! void Span::addSpan(std::iterator<int> start, std::iterator<int> end) :
//! Take two iterator as argument.
//! start = begin() iterator
//! end = end() iterator
//! The copy proceed until the end or until the container is full.

void Span::addSpan(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    for (; start != end - 1; start++) {
        if(_container.size() > _size)
            throw std::exception();
        _container.push_back(*start);
    }
    if(_container.size() > _size)
        throw std::exception();
    _container.push_back(*start);
}

int Span::shortestSpan(){
    if(_container.size() < 2)
        throw std::exception();
    
    unsigned int shortest = -1;
	std::sort(_container.begin(), _container.end());
	for (std::vector<int>::iterator i = _container.begin(); i != (_container.end() - 1); i++)
	{
		unsigned int span = *(i + 1) - *i;
//        std::cout << *(i + 1) << " - " << *i << " = " << *(i + 1) - *i << std::endl;
		shortest = shortest > span ? span : shortest;
	}
	return shortest;
}

int Span::longestSpan(){
    if(_container.size() < 2)
        throw std::exception();
    //* Here we need to access the pointer value because this returns an iterator
    return *std::max_element(_container.begin(), _container.end()) - *std::min_element(_container.begin(), _container.end());
}