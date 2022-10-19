# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:10:16 by vwildner          #+#    #+#              #
#    Updated: 2022/10/19 20:10:17 by vwildner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SETTINGS ####

NAME = convert

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

FILES = Base.cpp Derived.cpp

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
