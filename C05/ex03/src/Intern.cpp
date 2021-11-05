#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Form *returnPresidentialForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *returnRobotomyForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *returnShrubberyForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {

	Form *(*func_ptr[3])(std::string) = {
			returnPresidentialForm,
			returnRobotomyForm,
			returnShrubberyForm
	};

	std::string formsTemplates[3] = {
			"pardon",
			"robotomy",
			"shrubbery"
	};

	for(int i = 0; i < 3; i++) {
		if(!formName.compare(formsTemplates[i])) {
			std::cout << "Intern creates [" + formName + "]" << std::endl;
			return func_ptr[i](formTarget);
		}
	}

	throw Intern::FormNotFound();
}

const char *Intern::FormNotFound::what() const throw() {
	return("Form template not found.");
}