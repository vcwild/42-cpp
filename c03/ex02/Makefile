# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:01:34 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 20:01:36 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = fragtrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

FILES += main.cpp
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
