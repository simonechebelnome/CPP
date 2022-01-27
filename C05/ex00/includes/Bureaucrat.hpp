#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat( unsigned int grade, std::string const &name );
    Bureaucrat( Bureaucrat const &copy );
    Bureaucrat &operator=( Bureaucrat const &copy );
    ~Bureaucrat();

    const std::string getName() const;
    unsigned int getGrade() const;


    void incGrade();
    void decGrade();

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
    unsigned int _grade;
};

std::ostream& operator<< (std::ostream& o, const Bureaucrat& b);

#endif