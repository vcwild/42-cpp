#### SETTINGS ####

NAME = account

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp
HEADERS = Account.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

#### RULES ####

all: $(NAME)

$(NAME): $(FILES) $(HEADERS) tests.cpp
	@$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
