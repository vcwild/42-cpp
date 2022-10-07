#### SETTINGS ####

NAME = main

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

#### RULES ####

all: $(NAME)

$(NAME): $(FILES)
	@$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
