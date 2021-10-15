NAME = fixed

COMPILER = g++
FLAGS = -Wall -Wextra -Werror

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(FLAGS) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
