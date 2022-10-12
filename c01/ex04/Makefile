#### SETTINGS ####

NAME = nosed

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = NoSed.cpp main.cpp
HEADERS = NoSed.hpp

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
