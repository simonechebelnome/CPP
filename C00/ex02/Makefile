# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smenna <smenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 09:49:45 by smenna            #+#    #+#              #
#    Updated: 2021/09/20 15:05:37 by smenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account 

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(FLAGS) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
