#include "../includes/Form.hpp"

//* -- BASIC CLASS FUNCTIONS --

Form::Form( void ) : _name("default"), _signGrade(1), _execGrade(1), _isSigned(false) {
    std::cout << "empty constructor called" << std::endl;
}

Form::Form( unsigned int signGrade, unsigned int execGrade, std::string const &name ) :  _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {
    std::cout << "default constructor called" << std::endl;
    if(_signGrade < 1 || _execGrade < 1){
        throw GradeTooLowException();
    } else if (_signGrade > 150 || _execGrade > 150){
        throw GradeTooHighException();
    }
}

Form::~Form() {
    std::cout << "destructor called" << std::endl;
}

Form &Form::operator=( Form const &copy ) {
    *this->_name = copy.getName();
    *this->_signGrade = copy.getSignGrade();
    *this->_execGrade = copy.getExecGrade();
    *this->_isSigned = copy.getSignStatus();
    return (*this);
}

Form::Form( Form const &copy ) : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade), _isSigned(copy._isSigned) {
    std::cout << "copy constructor called" << std::endl;
}

//* -- MEMBER FUNCTIONS --

unsigned int Form::getExecGrade() const {
    return _execGrade;
}

unsigned int Form::getSignGrade() const {
    return _signGrade;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getSignStatus() const {
    return _isSigned;
}

void Form::beSigned(Bureaucrat const &bureau){
    if(bureau.getGrade() > _signGrade){
        _isSigned = true;
    } else {
        throw GradeTooLowException();
    }
}


const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<< (std::ostream& o, const Form& b) {
	{ o << "Form name " << b.getName() << '\n' << "Form Sign Grade: " << b.getSignGrade() << '\n' 
    << "Form Exec Grade: " << b.getExecGrade() << '\n' << "Signed status: " << b.getSignStatus() << '\n'; }
	return o;
}






