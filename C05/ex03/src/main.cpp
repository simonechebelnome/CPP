#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>

int main()
{
    Intern test;
    Form* rrf;
    rrf = test.makeForm("pardon", "Cacca");
    std::cout << rrf->getName() << std::endl; //* Without this the flag doesn't compile... :/
    delete rrf;
    rrf = test.makeForm("robotomy", "Bender");
    std::cout << rrf->getName() << std::endl; //* Without this the flag doesn't compile... :/
    delete rrf;
    rrf = test.makeForm("shrubbery", "Tiler");
    std::cout << rrf->getName() << std::endl; //* Without this the flag doesn't compile... :/
    delete rrf;
}