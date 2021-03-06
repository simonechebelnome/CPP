#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(25, 5, "presidential") {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form(form) {
	*this = form;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}

void PresidentialPardonForm::execute() const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}