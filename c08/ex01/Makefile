#### SETTINGS ####

NAME = find

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g3

FILES = Span.cpp

.SUFFIXES: .o .cpp .hpp .tpp

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
