NAME = scavTrap

COMPILER = g++
FLAGS = -Wall -Wextra -Werror

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(FLAGS) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
