#include "../includes/Bureaucrat.hpp"

int main(){
    
    Bureaucrat myBur(100, "Simone");
	Form myForm(10, 15, "Form di Simone");
	Form myForm2(140, 15, "Secondo Form di Simone");

	try {

		myBur.signForm(myForm);
		myBur.signForm(myForm2);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

    return 0; 
}