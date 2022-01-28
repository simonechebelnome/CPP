#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T> class Array {
private:
    T* _arr;
    size_t _size;
public:
    Array(){ _arr = NULL; _size = 0; }

    Array( unsigned int n ){ 
        _size = n;
        _arr = new T[_size];
        for(size_t i = 0; i < _size; i++){
            _arr[i] = 0;
        }
    }

    //* This can't be const, it needs to be modified
    Array( Array &copy ){
        _size = copy.size();
        _arr = new T[_size];
        for(size_t i = 0; i < _size; i++){
            _arr[i] = copy._arr[i];
        } 
    }

    ~Array() { if (_size) delete [] _arr; }

    Array &operator=(const Array& other) {
		if (_size)
			delete [] _arr;

		_size = other.size();
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = other[i];
	}

    T &operator[](unsigned int index) {
		if (index >= _size)
			throw OutOfBoundsException();
		return _arr[index];
	}

    size_t size() { return _size; }

    class OutOfBoundsException: public std::exception {
        virtual const char *what() const throw() {
            return("Array out of bounds");
        }
    };
};

#endif