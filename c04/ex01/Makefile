#### SETTINGS ####

NAME = animal

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g

FILES = Animal.cpp Dog.cpp Cat.cpp Brain.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

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
