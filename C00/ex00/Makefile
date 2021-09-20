# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smenna <smenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 09:49:45 by smenna            #+#    #+#              #
#    Updated: 2021/09/20 13:01:27 by smenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(FLAGS) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
