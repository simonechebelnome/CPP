NAME = zombie

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(FLAGS) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
