#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm( std::string const &target );
    PresidentialPardonForm( PresidentialPardonForm const &copy );
    ~PresidentialPardonForm();

    void execute() const;
    std::string getTarget() const;

private:
    std::string _target;
};

#endif