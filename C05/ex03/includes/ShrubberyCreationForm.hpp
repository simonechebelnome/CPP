#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm( std::string const &target );
    ShrubberyCreationForm( ShrubberyCreationForm const &copy );
    ~ShrubberyCreationForm();

    void execute() const;
    std::string getTarget() const;

private:
    std::string _target;
};

#endif