#include "../includes/Base.hpp"
#include <stdlib.h>

Base* generate(void){
    srand(time(NULL));
    int rValue = rand() % 3;
    switch(rValue){
        case 0:
            std::cout << "A was created" << std::endl;
            return new A;
        case 1:
            std::cout << "B was created" << std::endl;
            return new B;
        case 2:
            std::cout << "C was created" << std::endl;
            return new C;
    }
    return (NULL);
}

//* The best way to check this is using a dynamic cast! (it does the check for you)
void identify(Base* p){
    if(dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else {
        std::cerr << "Cannot resolve pointer type" << std::endl; 
    }
}

//* With references we need to manually catch the errors as the compiler doesn't do this for us
//* Also we use void otherwise -Werror doesn't let us compile
void identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (std::exception &err) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        } catch (std::exception &err) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            } catch (std::exception &err) {
                std::cerr << "Cannot resolve pointer type" << std::endl;
            }
        }
    }
}

int main() {
    Base* type = generate();

    identify(type);
    identify(*type);

    delete type;
    return 0;
}