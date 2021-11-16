#include <iostream>
#include <string>

int main()
{
    std::string message = "HI THIS IS BRAIN";
    std::string *stringPTR = &message;
    std::string &stringREF = message;

    std::cout << &message << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}