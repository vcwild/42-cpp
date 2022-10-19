# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:05:28 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 20:05:29 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = amateria

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

FILES = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
HEADERS = AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp

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
