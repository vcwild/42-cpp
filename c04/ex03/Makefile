#### SETTINGS ####

NAME = amateria

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g3

FILES = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
HEADERS = AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp

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
