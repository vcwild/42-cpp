#### SETTINGS ####

NAME = convert

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g3

FILES = Base.cpp Derived.cpp

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
