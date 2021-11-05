#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm( std::string const &target );
    RobotomyRequestForm( RobotomyRequestForm const &copy );
    ~RobotomyRequestForm();

    void execute() const;
    std::string getTarget() const;

private:
    std::string _target;
};

#endif