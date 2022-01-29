#include "../includes/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "Top element: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Stack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

    std::cout << "mstack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> c(mstack);

    MutantStack<int> s;

    s.push(10);
    s.push(50);
    s.push(3);

    s.swap(mstack);


    it = mstack.begin();
    ite = mstack.end();
    std::cout << "m stack: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "s stack: " << std::endl;
    it = s.begin();
    ite = s.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

	return 0;
}