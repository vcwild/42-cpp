# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 19:59:09 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 19:59:10 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = nosed

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = NoSed.cpp main.cpp
HEADERS = NoSed.hpp

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
