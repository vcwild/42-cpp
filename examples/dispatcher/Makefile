#### SETTINGS ####

NAME = harl

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Harl.cpp
HEADERS = Harl.hpp

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
