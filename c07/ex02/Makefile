# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:11:03 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 20:11:04 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = array

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

.SUFFIXES: .o .cpp .hpp .tpp

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
