#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form();
    Form( unsigned int signGrade, unsigned int execGrade, std::string const &name );
    Form( Form const &copy );
    Form &operator=( Form const &copy );
    virtual ~Form();

    std::string getName() const;
    unsigned int getSignGrade() const;
    unsigned int getExecGrade() const;
    bool getSignStatus() const;

    void beSigned( Bureaucrat const &bureau );

    void execute(Bureaucrat const & executor) const;
    virtual void execute() const = 0;

    class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
    std::string const _name;
    unsigned int const _signGrade;
    unsigned int const _execGrade;
    bool _isSigned;


};

std::ostream& operator<< (std::ostream& o, const Form& b);

#endif