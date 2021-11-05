#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(145, 137, "shrubbery") {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form) {
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute() const {
	std::string	filename;

	filename = _target + "_shrubbery";
	std::ofstream output(filename.c_str(), std::ios::out);

	output << "                                       .         \n   "
    "                                          .         ;  \n"
    "             .              .              ;%     ;;   \n"
    "               ,           ,                :;%  %;   \n"
    "                :         ;                   :;%;'     .,   \n"
    "       ,.        %;     %;            ;        %;'    ,; \n"
    "         ;       ;%;  %%;        ,     %;    ;%;    ,%' \n"
    "          %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
    "           ;%;      %;        ;%;        % ;%;  ,%;' \n"
    "            `%;.     ;%;     %;'         `;%%;.%;' \n"
    "            `:;%.    ;%%. %@;        %; ;@%;%' \n"
    "                `:%;.  :;bd%;          %;@%;' \n"
    "                  `@%:.  :;%.         ;@@%;'   \n"
    "                    `@%.  `;@%.      ;@@%;         \n"
    "                      `@%%. `@%%    ;@@%;        \n"
    "                        ;@%. :@%%  %@@%;       \n"
    "                          %@bd%%%bd%%:;     \n"
    "                            #@%%%%%:;;\n"
    "                            %@@%%%::;\n"
    "                            %@@@%(o);  . '         \n"
    "                            %@@@o%;:(.,'        \n" 
    "                       `.. %@@@o%::;         \n"
    "                           `)@@@o%::;         \n"
    "                            %@@(o)::;        \n"
    "                           .%@@@@%::;         \n"
    "                          ;%@@@@%::;.          \n"
    "                         ;%@@@@%%:;;;. \n"
    "                      ...;%@@@@@%%:;;;;,.. hai trovato un easter egg bravo complimenti\n" << std::endl;

	output.close();

	std::cout << "Shrubbery has been planted." << std::endl;
}