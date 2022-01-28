#include "../includes/Bureaucrat.hpp"

int main(){
    
    Bureaucrat myBur(10, "Simone");
	Form myForm(1, 15, "Form di Simone");
	Form myForm2(140, 15, "Secondo Form di Simone");

    std::cout << myForm2.getSignGrade() << " BUR: " << myBur.getGrade() <<std::endl;

	try {
        myBur.signForm(myForm);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}


    try {
        myBur.signForm(myForm2);
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    return 0; 
}