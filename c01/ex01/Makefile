# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 19:57:55 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 19:57:58 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Zombie.cpp zombieHorde.cpp main.cpp
HEADERS = Zombie.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

OBJS = $(FILES:.cpp=.o)

#### RULES ####

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
