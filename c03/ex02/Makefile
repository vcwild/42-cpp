#### SETTINGS ####

NAME = fragtrap

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

#### RULES ####

all: $(NAME)

$(NAME): $(FILES) $(HEADERS) main.cpp
	@$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
