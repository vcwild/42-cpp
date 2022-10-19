# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:11:21 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 20:11:22 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = find

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

FILES = Span.cpp

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
