#### SETTINGS ####

NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Zombie.cpp main.cpp
HEADERS = Zombie.hpp

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
