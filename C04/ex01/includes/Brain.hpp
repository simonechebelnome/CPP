#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
public:
    Brain();
    Brain( Brain const &copy );
    virtual ~Brain();

    Brain &operator=( Brain const &copy );
private:
    std::string ideas[100];
};

#endif