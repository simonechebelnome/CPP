#include "../includes/Karen.hpp"

int return_error(std::string message)
{
	std::cerr << message << std::endl;
	return -1;
}

int main(int argc, char *argv[])
{
	Karen myKaren;
	if(argc != 2)
		return(return_error("Wrong number of arguments!"));
	myKaren.complain(argv[1]);
	return 0;
}