#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat myBur(4, "Simone");

	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm roboto("Roboto");
	PresidentialPardonForm presidential("Pardon");

    myBur.executeForm(shrubbery);

	try {
		shrubbery.beSigned(myBur);
		roboto.beSigned(myBur);
		presidential.beSigned(myBur);

		shrubbery.Form::execute(myBur);
		roboto.Form::execute(myBur);
		presidential.Form::execute(myBur);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
}