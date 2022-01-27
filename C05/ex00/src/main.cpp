#include "../includes/Bureaucrat.hpp"

int main(){
    
    //* Default Params Test

    try {
        Bureaucrat highTest(151, "Simone");
    } catch (const std::exception &error) {
        std::cerr << error.what() << std::endl;
    }

    try {
        Bureaucrat lowTest(0, "Diego");
    } catch (const std::exception &error) {
        std::cerr << error.what() << std::endl;
    }

    //* Update Params Test

    Bureaucrat incTest(149, "Giovanni");

    try {
        incTest.incGrade();
        incTest.incGrade();
    } catch (const std::exception &error) {
        std::cerr << error.what() << std::endl;
    }

    Bureaucrat decTest(2, "Martina");

    try {
        incTest.decGrade();
        incTest.decGrade();
    } catch (const std::exception &error) {
        std::cerr << error.what() << std::endl;
    }

    try {
        incTest.decGrade();
        incTest.decGrade();
    } catch (const std::exception &error) {
        std::cerr << error.what() << std::endl;
    }

    //* Show Results

    std::cout << "Output test >> " << incTest << "." << std::endl;
    std::cout << "Output test >> " << decTest << "." << std::endl;

    return 0; 
}