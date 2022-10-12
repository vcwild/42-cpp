#### SETTINGS ####

NAME = account

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp tests.cpp
HEADERS = Account.hpp

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
