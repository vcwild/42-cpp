#### SETTINGS ####

NAME = battle

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

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
