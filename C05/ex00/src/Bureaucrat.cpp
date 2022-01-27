#include "../includes/Bureaucrat.hpp"

//* -- BASIC CLASS FUNCTIONS --

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {
    std::cout << "empty constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( unsigned int grade, std::string const &name ) :  _name(name) {
    std::cout << "default constructor called" << std::endl;
    if(grade < 1){
        throw GradeTooLowException();
    } else if (grade > 150){
        throw GradeTooHighException();
    }

    this->_grade = grade; 
}

Bureaucrat::~Bureaucrat() {
    std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &copy ) {
    _grade = copy._grade;
    return *this;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) : _name(copy._name), _grade(copy._grade) {
    std::cout << "copy constructor called" << std::endl;
}

//* -- MEMBER FUNCTIONS --

unsigned int Bureaucrat::getGrade() const {
    return _grade;
}

const std::string Bureaucrat::getName() const {
    return _name;
}

void Bureaucrat::incGrade() {
    if(_grade == 1)
        throw GradeTooLowException();
    _grade--;
    std::cout << "Bureaucrat " << getName() << " grade has been updated to " << getGrade() << std::endl;
}

void Bureaucrat::decGrade() {
    if(_grade == 150)
        throw GradeTooHighException();
    _grade++;
    std::cout << "Bureaucrat " << getName() << " grade has been updated to " << getGrade() << std::endl;

}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<< (std::ostream& o, const Bureaucrat& b) {
	o << b.getName() + ", bureaucrat grade " << b.getGrade();
	return o;
}






