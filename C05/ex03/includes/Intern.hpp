#ifndef INTERN_HPP
#define INTERN_HPP

#include <Form.hpp>
#include <iostream>

class Intern {
public:
	Intern();
	~Intern();

	Form	*makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception {
		virtual const char* what() const throw();
	};
    
private:
	std::string	_name;
	std::string	_target;
};

#endif